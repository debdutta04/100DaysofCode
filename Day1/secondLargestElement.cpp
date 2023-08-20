#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
  
    sort(arr.begin(),arr.end());
    for(int i=n-2; i>=0; i--){
        if(arr[i] != arr[n-1])
            return arr[i];
        }
    return -1;
}

    int main(){
	
	int n;
    cout<<"Enter a size of Array";
	cin>>n;
	vector<int> arr;
	for(int i=0; i<n; i++){
		int element =0;
		cin>>element;
		arr.push_back(element);
	}
	
	int ans = findSecondLargest(n, arr);
	cout<<"Second largest element is "<<ans;
	return 0;
}

