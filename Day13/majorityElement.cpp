#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ls;
    map<int ,int> mp;
  
    int n =arr.size();
    int mini =(int)(n/3)+1;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
        if(mp[arr[i]]== mini){
            ls.push_back(arr[i]);
        }
        if(ls.size() == 2)
        break;
    }
    sort(ls.begin(),ls.end());
    return ls;

}
