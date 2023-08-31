#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(vector<int> arr, int n)
{
    long maxi =LONG_MIN;
    long sum =0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if( sum > maxi){
            maxi = sum;
        }
        if(sum < 0)
            sum =0;
    }
    if( maxi < 0) maxi =0;
    return maxi;
}