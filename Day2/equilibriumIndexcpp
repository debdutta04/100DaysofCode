#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int findEquilibriumIndex(vector<int> &arr) {
        int n= arr.size();
        int sum =0;
        int left_sum=0;
        for(int i=0; i<n;i++){
            sum += arr[i];
        }
        for(int i =0; i<n;i++){
            sum -= arr[i];
            if(left_sum == sum)
                return i;
            left_sum+=arr[i];

        }
       
       return -1;
        
    
}
