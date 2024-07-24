#include<bits/stdc++.h>
#define ll long long
int mod=1000000007;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int sum=0;
    vector<int>arr(n);
    for(int i=0; i<n; ++i){
        cin>>arr[i];
        sum+=arr[i];
    }

    int md=sum%n;
    int ans=md+(n-md);

    cout<<ans<<"\n";

    return 0;
}