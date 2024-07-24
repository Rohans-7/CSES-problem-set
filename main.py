def collectTokens(expression):
    """Parse the input expression into tokens (numbers, operators, parentheses)."""
    tokens = []
    number = ''
    for char in expression:
        if char in '0123456789.':
            number += char
        else:
            if number:
                tokens.append(number)
                number = ''
            if char in '+-*/^()':
                tokens.append(char)
    if number:
        tokens.append(number)
    return tokens

def precedence(op):
    """Return the precedence of the operator."""
    if op in ('+', '-'):
        return 1
    if op in ('*', '/'):
        return 2
    if op == '^':
        return 3
    return 0

def operator_result(operators, values):
    op = operators.pop()
    right = values.pop()
    left = values.pop()
    if op== '+':
        values.append(left + right)
    elif op== '-':
        values.append(left - right)
    elif op== '*':
        values.append(left * right)
    elif op== '/':
        if right == 0:
            raise ZeroDivisionError("division by zero")
        values.append(left / right)
    elif op== '^':
        values.append(left ** right)

def evaluate_reg_expression(tokenList):
    # values stack for values and operators for the operators in the string
    # Shunting yard algorithm is used
    values = [] 
    operators = []
    i = 0

    while i < len(tokenList):
        token = tokenList[i]
        
        if token.isnumeric() or '.' in token:
            values.append(float(token))
        
        elif token == '(':
            operators.append(token)
        
        elif token == ')':
            while operators and operators[-1] != '(':
                operator_result(operators, values)
            operators.pop()
        
        elif token in '+-*/^':
            while (operators and precedence(operators[-1]) >= precedence(token)):
                operator_result(operators, values)
            operators.append(token)
        
        i += 1

    while operators:
        operator_result(operators, values)
    
    return values[0]

def solve(reg_exp):
    tokenList = collectTokens(reg_exp)
    ans = evaluate_reg_expression(tokenList)
    return ans

def main():
    while True:
        reg_exp = input("Enter a mathematical expression: ")
        try:
            ans = solve(reg_exp)
            print(f"The result is: {ans}")
        except ZeroDivisionError:
            print("Cannot divide by the zero")
        except Exception as e:
            print(f"Please enter correct input, error: {e}")

if __name__ == "__main__":
    main()
