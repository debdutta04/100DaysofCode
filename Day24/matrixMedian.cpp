#include <bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
     vector<int>line;
    for(int i = 0; i< matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            line.push_back(matrix[i][j]);
        }
    }

    sort(line.begin(),line.end());
    int medin = (line.size() / 2) ;

    return line[medin];
}
