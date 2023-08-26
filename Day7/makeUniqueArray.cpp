#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
     int n = arr.size();
	   unordered_map<int , int> present;
     int count=0;

     for(int i =0; i<n; i++){
      // If the current element is present in array.
      if(present[arr[i]]){
        count++;
      }
      else{
     //mark it as present only 
			present[arr[i]] = -1;
      }
     }
    return count;
}
