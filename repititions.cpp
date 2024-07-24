#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    string s;
    cin>>s;

    ll n=s.length();

    ll curr_cnt=1;
    ll maxCnt=1;

    for(int i=1; i<n; i++){
        if(s[i-1]==s[i]){
            curr_cnt++;
            maxCnt=max(maxCnt,curr_cnt);
        }
        else{
            curr_cnt=1;
        }
    }

    cout<<maxCnt<<"\n";
}