#include<bits/stdc++.h>
#define ll long long

using namespace std;

void minDiff(ll ind, vector<ll>&arr,ll sum1,ll sum2,ll n,ll& gmin){
    if(ind==n){
        gmin=min(gmin,abs(sum1-sum2));
        return;
    }

    minDiff(ind+1,arr,sum1+arr[ind],sum2,n,gmin);
    minDiff(ind+1,arr,sum1,sum2+arr[ind],n,gmin);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>arr(n);

    ll sum=0,ans,gmin=INT_MAX;

    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }


    
    minDiff(0,arr,0,0,n,gmin);
    cout<<gmin<<"\n";

    



    return 0;
}