#include <bits/stdc++.h> 
using namespace std;
int pairSum(vector<int> &arr, int n, int target){
	int count = 0;
	int i=0; 
	int j=n-1;
	while(i<j){

		if(arr[i]+arr[j]==target){
			count++;
			i++;
			j--;
		}
		else if(arr[i]+arr[j]<target) i++;
		else j--;
	}
	//if(count < 1)
	if(count)return count;
	return -1;

}     