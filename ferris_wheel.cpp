#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    vector<int>p(n);
    for(int i=0; i<n; ++i){
        cin>>p[i];
    }

    sort(p.begin(),p.end());

    int start=0,end=n-1,res=0;

    while(start<=end){
        if(p[start]+p[end]<=x){
            start++;
        }
        res++;
        end--;
    }

    cout<<res<<"\n";
    return 0;
}