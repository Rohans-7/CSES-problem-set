#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,k;
    cin>>n>>m>>k;

    vector<ll>a(n);
    vector<ll>b(m);

    for(ll i=0; i<n; ++i){
        cin>>a[i];
    }

    for(ll i=0; i<m; ++i){
        cin>>b[i];
    }

    ll i=0,j=0;

    ll cnt=0;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    while(i<n && j<m){
        if(b[j]<=a[i]+k && a[i]>=b[j]-k){
            i++;
            j++;
            cnt++;
        }
        else{
            i++;
        }
    }

    cout<<cnt<<"\n";


    return 0;
}