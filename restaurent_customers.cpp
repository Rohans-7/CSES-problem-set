#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll ans=0,maxAns=INT_MIN;

    map<ll,ll>m;

    for(ll i=0; i<n; ++i){
        ll a,b;
        cin>>a>>b;
        m[a]++;
        m[b]--;
    }

    for(auto &el: m){
        ans+=el.second;
        maxAns=max(maxAns,ans);
    }

    cout<<maxAns<<"\n";

    

    return 0;
}