#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	map<int ,int > mpp;
	for(int i=0; i<n; i++){
		mpp[arr[i]]++;
	}
	for(auto it:mpp){
		if(it.second > n/2){
			return it.first;
		}
	}
	return -1;
}
