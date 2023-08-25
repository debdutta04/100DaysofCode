void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    for(int i=0;i<=nRows/2;i++){
        for(int j=i;j<nCols-1-i;j++){
            cout<<input[i][j]<<" ";
        } 

        for(int j=i;j<nRows-1-i;j++){
            cout<<input[j][nCols-1-i]<<" ";
        } 

        for(int j=nCols-1-i;j>i;j--){
            cout<<input[nRows-i-1][j]<<" ";
        } 

        for(int j=nRows-i-1;j>i;j--){
            cout<<input[j][i]<<" ";
        }

    }

    if((nRows&1)&&(nCols&1)) cout<<input[nRows/2][nCols/2];
}
