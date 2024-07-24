#include<bits/stdc++.h>
#define ll long long
int mod=1000000007;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>vec(n);

    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    ll sum=0;
    ll maxi=INT_MIN;

    for(int i=0; i<n; ++i){
        sum+=vec[i];
        if(sum>maxi){
            maxi=sum;
        }

        if(sum<0){
            sum=0;
        }
    }

    cout<<maxi<<"\n";

    return 0;
}