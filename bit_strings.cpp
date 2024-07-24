#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n=0;
    cin>>n;

    ll ans=1;

    for(int i=1; i<=n; i++){
        ans=(ans*2)%mod;
    }

    cout<<ans<<"\n";
}