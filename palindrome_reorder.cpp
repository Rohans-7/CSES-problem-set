#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    ll cnt[26]={0};

    for(ll i=0; i<s.length(); i++){
        cnt[s[i]-65]++;
    }

    ll oddCnt=0,oddIndex=27;

    for(ll i=0; i<26; i++){
        if(cnt[i]&1){
            oddCnt++;
            oddIndex=i;
        }
    }

    if(oddCnt>1){
        cout<<"NO SOLUTION"<<"\n";
    }
    else{
        string ans="";
        if(oddCnt==1){
            ll n=cnt[oddIndex];
        for(ll i=0; i<n; i++){
            ans+=oddIndex+65;
        }
        }
        for(ll i=0; i<26; i++){
            if(i!=oddIndex){
                for(int j=0; j<cnt[i]/2; j++){
                    char ch=i+65;
                    ans=ch+ans+ch;
                }
            }
        }
        cout<<ans<<"\n";
    }


    return 0;
}