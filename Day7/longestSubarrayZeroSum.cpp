#include <bits/stdc++.h>


int LongestSubsetWithZeroSum(vector<int> arr) {
  
  // Create an unordered map to store prefix sum and its index
  unordered_map<int, int> mpp;

  int n = arr.size();
  int maxi = 0; // Variable to store the maximum length of subarray with zero sum
  int sum = 0;  // Variable to store the prefix sum

 
  for (int i = 0; i < n; i++) {
    sum += arr[i];  // Update the prefix sum

    // If the prefix sum becomes zero, update the maximum length
    if (sum == 0) {
      maxi = i + 1;
    } else {
      // If the current prefix sum exists in the map, update the maximum length
      if (mpp.find(sum) != mpp.end()) {
        maxi = max(maxi, i - mpp[sum]);
      } else {
        // If the current prefix sum is encountered for the first time, store it in the map
        mpp[sum] = i;
      }
    }
  }

  return maxi;  // Return the maximum length of subarray with zero sum
}
