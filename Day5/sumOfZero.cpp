#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &mat) {
    int count =0;

    for(int i =0; i<mat.size();i++){
        for(int j=0; j<mat[i].size();j++){

            if(mat[i][j]== 0){
                //check for left
                if((j != 0) && (mat[i][j-1]==1))
                    count++;
                    
                //check for right
                  if ((j < mat[i].size() - 1) && (mat[i][j + 1] == 1))
                  count++;
                  
                //check for top
                 if ((i != 0) && (mat[i - 1][j] == 1))
                    count++;
                    
            //check for bottom
          if ((i < mat.size() - 1) && (mat[i + 1][j] == 1))
                    count++;
            }else{
                continue;
            }
        }
    }
    return count;
}
