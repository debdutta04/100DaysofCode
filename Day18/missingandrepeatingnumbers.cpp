#include <bits/stdc++.h>
 
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	  pair<int,int> ans;
    sort(arr.begin(),arr.end());
    int sum1=0;

    for(int i=0; i<n; i++){
        if(arr[i]-arr[i+1]==0){
            ans.second=arr[i];
        }
    }

    int sum=n*(n+1)/2+ans.second;

    for(int i=0; i<n; i++){
        sum1=sum1+arr[i];
    }
    ans.first=sum-sum1;

    return ans;

	
}
