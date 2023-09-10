#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int> &nums, int n) {
	// Write your code here.
    int total_sum=0;
   // int n=nums.size();
    for(int i=0;i<n;i++) total_sum+=nums[i];

    int sum1=0;
    int maxi=INT_MIN;

    int sum2=0;
    int mini=INT_MAX;



    for(int i=0;i<n;i++){
        sum1+=nums[i];
        maxi=max(maxi,sum1);
        if(sum1 < 0) sum1=0;

        sum2+=nums[i];
        mini=min(mini,sum2);
        if(sum2 > 0) sum2=0;
    }

    int s1=total_sum-mini;
    if(s1 == 0){
        return maxi;
    }
    else{
        return max(maxi , s1);
    }
}