#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
int subArrayCount(vector<int> &arr, int k) {
// HashMap to store frequency.
    unordered_map<int, int> remMap; 
    // Add base case in hashmap. 
    remMap[0] = 1;                   
    int count = 0;
    long summ = 0;
    for (int i = 0; i < arr.size(); i++) {
        summ += arr[i];

        int rem = ((summ % k) + k) % k;
        // If rem already in 'remMap'.
        if (remMap.find(rem) != remMap.end()) {
            count += remMap[rem];
            remMap[rem] += 1;
        } else {
            remMap[rem] = 1;
        }
    }

    return count;
}