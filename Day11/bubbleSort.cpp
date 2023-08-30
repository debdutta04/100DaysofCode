#include <bits/stdc++.h> 

void bubbleSort(vector<int>& arr, int n)
{   
    int count =0;
    for(int i=0; i<n;i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
        if(count == 0){
        break;
    }
    }
    
}