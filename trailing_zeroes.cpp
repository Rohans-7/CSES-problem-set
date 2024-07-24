#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n=0;
    cin>>n;

    ll num1=n,num2=n;

    ll five=0,two=0;

    while(num1!=0){
        five=five+num1/5;
        num1/=5;
    }

    while(num2!=0){
        two+=num2/2;
        num2=num2/2;
    }

    cout<<min(five,two)<<" ";


    return 0;
}