#include <bits/stdc++.h> 
using namespace std;
void inplaceRotate(vector<vector<int>> &inputArray)
{ 
    int n=inputArray.size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {   //transponse
                swap(inputArray[i][j],inputArray[j][i]);
            }
        }
        //reverse the transpose matrix
    reverse(inputArray.begin(),inputArray.end());
}