#include <bits/stdc++.h> 
using namespace std;

int kadane(int temp[],int n)
{
	int sum =0;
	int max_sum = INT_MIN;
	for(int i=0;i<n;i++)
	{
		sum+=temp[i];
		max_sum = max(max_sum,sum);
		if(sum<0) sum =0;
	}
	return max_sum;
}
int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
	int max_sum = INT_MIN;
	int sum = 0;
	int col,col2,row;
	int temp[n];
	for(col=0;col<m;col++)
	{
		for(row=0;row<n;row++) temp[row] = 0;
		
		for(col2=col;col2<m;col2++)
		{
			for(row=0;row<n;row++) temp[row]+=arr[row][col2];
			sum = kadane(temp,n);
			max_sum = max(max_sum,sum);
		}
	}
	return max_sum;
}