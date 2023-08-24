#include <bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>> matrix){  
    for ( int i=0; i < matrix.size();i++){

        for(int j=0; j < matrix[i].size();j++){
               if(matrix[i][j] != matrix[j][i])
                   return 0;
           }
        }
    
    return 1;
}
