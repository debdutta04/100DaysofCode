#include <bits/stdc++.h> 
using namespace std;

vector<int> nextGreater(vector<int> &arr, int n) {

    vector<int>ans(n);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--) {
        
        // We will pop the elements from the stack till we get the greater element 
        // Or stack become empty
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }

        if (s.empty()) {
            ans[i] = -1;
        } 
        else {
            ans[i] = s.top();
        }

        s.push(arr[i]);
    }

    return ans;


}