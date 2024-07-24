#include<bits/stdc++.h>

#define ll long long

using namespace std;


int main(){
    ll n,sum=0,a;
    cin>>n;

    for(int i=0; i<n-1; i++){
        cin>>a;
        sum+=a;
    }

    cout<<(n*(n+1)/2)-sum;
}
