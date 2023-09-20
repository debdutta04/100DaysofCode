#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr, int s, int e){

    int pivot = arr[s];
    int cnt =0;
    for(int i =s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    //place pivot at right position
    int pivotIndex= s + cnt;
    swap(arr[pivotIndex],arr[s]);

    //left and right part

    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex){
      while(arr[i] <= pivot){
            i++;
      }
      while(arr[j] > pivot){
        j--;
      }
       if(i <pivotIndex && j > pivotIndex){
        swap(arr[i++],arr[j--]);
       }
    }
    return pivotIndex;
}
void quickSort(vector<int>&arr, int s, int e){
    //base case 
    if(s >= e){
        return ;
    }
    //partition
    int p = partition(arr,s,e);

    //Recursion call
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main()
{
    vector<int>arr={23,45,7,89,30};
    int n = arr.size();
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
     return 0;
}