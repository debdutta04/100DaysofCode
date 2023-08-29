#include <bits/stdc++.h> 
bool isSubSequence(string str1, string str2) {
    int m = str1.size();
    int n = str2.size();
    int i =0;
    int j =0;
    while(i < m && j<n){
        if(str1[i] == str2[j]){
            i++;
        }
        j++;
    }
  //if size of i and str1 size will be same
    return i==str1.size()?true:false;
}
