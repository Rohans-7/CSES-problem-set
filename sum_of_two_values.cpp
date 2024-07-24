#include<bits/stdc++.h>
#define ll long long
int mod=1000000007;

using namespace std;

pair<int,int> findSum(vector<int>&arr,int n,int target){
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return {left, right};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    // If no pair found
    return {-1, -1};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    int n;
    cin>>n>>x;
    vector<int>vec(n);

    for(int i=0; i<n; ++i){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    
    pair<int,int>ans=findSum(vec,n,x);

    if(ans.first!=-1 && ans.second!=-1){
        cout<<ans.first<<" "<<ans.second<<"\n";
    }
    else{
        cout<<"IMPOSSIBLE"<<"\n";
    }

    return 0;
}