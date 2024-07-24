#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll int n;
    ll int sum=0;
    cin>>n;
    vector<ll int>v(n);

    for(ll i=0; i<n; ++i){
        cin>>v[i];
    }

    for(ll i=1; i<n; ++i){
        if(v[i]<v[i-1]){
            sum+=v[i-1]-v[i];
            v[i]=v[i]+(v[i-1]-v[i]);
        }
    }

    cout<<sum<<" ";

    return 0;
}