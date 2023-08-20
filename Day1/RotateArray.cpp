#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k){
    for(int i=0; i<n; i++){
      
        cout<<arr[(i+k)%n]<<" ";
    }
}

int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    rotateArray(arr, n, k);
    return 0;
}
