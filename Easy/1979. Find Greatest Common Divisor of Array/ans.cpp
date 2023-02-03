#include<bits/stdc++.h>
using namespace std;

int findGCD(vector<int>& nums) {
    //  auto [mn, mx] = minmax_element(begin(nums), end(nums));
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        return gcd(maxi,mini);
    }

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<findGCD(nums);
}