#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    vector<string>permutations;
    sort(s.begin(),s.end());

    do{
        permutations.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    cout<<permutations.size()<<"\n";

    for(auto &str: permutations){
        cout<<str<<"\n";
    }

    return 0;


}