#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin>>n>>m;

    multiset<ll>ms;

    for(ll i=0; i<n; ++i){
        ll a;
        cin>>a;
        ms.insert(a);
    }

    for(ll i=0; i<m; ++i){
        ll customer;
        cin>>customer;

        auto it=ms.upper_bound(customer);

        if(it==ms.begin()){
            cout<<-1<<"\n";
        }
        else{
            cout<<*(--it)<<"\n";
            ms.erase(it);
        }
    }

    return 0;
}