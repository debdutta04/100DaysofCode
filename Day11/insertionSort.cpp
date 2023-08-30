#include <bits/stdc++.h> 

void insertionSort(int n, vector<int> &arr){
   
   for(int i=1; i<n; i++){
       //fetch
       int val =arr[i];
       int j =i-1;
       //comparision
       while(j>=0 && arr[j]>val){
           //shifting
           arr[j+1]=arr[j];
           j--;
       }
    
      //copy
    arr[j+1]=val;
}
}