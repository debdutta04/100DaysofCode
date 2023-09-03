#include<bits/stdc++.h>
using namespace std;
void pushZerosAtEnd(vector<int> &arr) 
{
	int nonZero=0;
	for(int j=0; j<arr.size();j++){
		if(arr[j] != 0){
			swap(arr[j],arr[nonZero]);
			nonZero++;
		}
	}
}