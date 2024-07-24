#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<int>vec(n);

    for(ll i=0; i<n; ++i){
        cin>>vec[i];
    }

    sort(vec.begin(),vec.end());

    ll curr_count=1,finalCnt=1;

    for(ll i=1; i<n; ++i){
        if(vec[i]==vec[i-1]){
            curr_count++;
        }
        else{
            curr_count=1;
            finalCnt++;
        }
    }
    cout<<finalCnt<<"\n";

    return 0;
}
