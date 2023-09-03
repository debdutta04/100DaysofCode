#include <bits/stdc++.h> 
vector<int> findTriplets(vector<int> &arr, int n) 
{
   vector<int> ans;
   sort(arr.begin(),arr.end());

   for(int k=n-1; k>=0; k--){
       int i=0, j=k-1;
       while(i < j){
           int sum =arr[i]+arr[j];

           if(sum == arr[k]){
               return {arr[i],arr[j],arr[k]};
           }else if( sum < arr[k]){
               i++;
           }else{
               j--;
           }
       }
   }
   return {};
}
