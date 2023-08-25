void spiralPrint(int **input, int nRows, int nCols)
{
   int count = 0;
   int total = nRows * nCols;

   //indexes 
   int startingRow =0;
   int startingCol =0;
   int endingRow =nRows -1;
   int endingCol =nCols -1;

   while( count < total){
       //print starting row
       for(int i =startingCol;count < total && i<= endingCol; i++){
           cout<<input[startingRow][i]<<" ";
           count++;
       }
       startingRow++;
         //print ending col
       for(int i =startingRow ;count < total && i<= endingRow; i++){
           cout<<input[i][endingCol]<<" ";
           count++;
       }
       endingCol--;
         //print ending row
       for(int i =endingCol ;count < total && i>= startingCol; i--){
           cout<<input[endingRow][i]<<" ";
           count++;
       }
       endingRow--;
          //print starting coloumn
       for(int i =endingRow ;count < total && i>= startingRow; i--){
           cout<<input[i][startingCol]<<" ";
           count++;
       }
      startingCol++;
   }
}
