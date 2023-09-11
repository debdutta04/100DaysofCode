#include <bits/stdc++.h> 
using namespace std;
vector<long long> maxProductCount(vector<int> &arr, int n) {
         // To store the product of two number as Key and value as the total number of occurrence.
    unordered_map<long long, int> map;

    // To find all pair product and store it to Map with there frequencies.
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long a = arr[i];
            long long b = arr[j];
            long long pairProduct = a * b;
            map[pairProduct]++;
        }
    }

    // To store max product pair.
    long long maxProd = 0;

    // To store frequency of max product.
    int freq = 0;

    // Traverse the Map.
    for (auto prods : map) {
        if (prods.second >= freq) {
            // If frequency is same as previous max frequency then choose the one with minimum product.
            if (prods.second == freq) {
                maxProd = min(maxProd, prods.first);
            } 
            else {
                maxProd = prods.first;
            }
            freq = prods.second;
        }
    }

    // Vector to store the values of max product and Quadruples.
    vector<long long> result;

    // If there is no pair having frequency count > 1.
    if (map.find(maxProd) == map.end() || map[maxProd] == 1) {
        // Returning the array containing max product and number of Quadruples.
        result.push_back(0);
        result.push_back(0);
        return result;
    }
    else {
        // Calculating total Quadruples as all Combination a pair can have with given frequency.
        long long allCombinations = ((freq * (freq - 1))) / 2;
        result.push_back(maxProd);
        result.push_back(allCombinations);
        // Returning the pair of max product and number of Quadruples.
        return result;
    }
}