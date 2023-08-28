#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){

  int s =0;
   int n = nums.size();
   int e = n-1;

   while(s < e){
       if(nums[s] >= 0 && nums[e] <0){
           swap(nums[s],nums[e]);
           s++;
           e--;
       }
       if(nums[s] < 0)
       s++;
       if(nums[e]>=0)
       e--;
   }
   return nums;
}
