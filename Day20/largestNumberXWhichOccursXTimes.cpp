#include <bits/stdc++.h>
int findX(vector<int> &arr) {
	unordered_map<int,int>mp;
	int maxi=0;
	int n = arr.size();
	
	for(int i=0; i<n; i++){
		mp[arr[i]]++;
	}
	for(auto it:mp){
		if(it.first == it.second){
			maxi = max(maxi,it.first);
		}
	}
	return maxi;
}
