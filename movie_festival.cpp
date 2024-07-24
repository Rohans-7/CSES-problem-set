#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    vector<pair<ll,ll>>vec(n);

    for(ll i=0; i<n; ++i){
        cin>>vec[i].first>>vec[i].second;
    }
    sort(vec.begin(),vec.end());

    ll ans=0,curr=0;

    for(ll i=0; i<n; ++i){
        if(i==0){
            ans++;
            curr=vec[i].second;
        }
        else{
            if(curr<=vec[i].first){
                curr=vec[i].second;
                ans++;
            }
            else{
                curr=min(curr,vec[i].second);
            }
        }
    }

    cout<<ans<<"\n";

    return 0;
}