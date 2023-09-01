#include <bits/stdc++.h> 
using namespace std;
bool areAnagram(string &str1, string &str2){

   int freqTable[256]={0};
   int n1= str1.size();
   int n2= str2.size();
   if(n1 != n2){
       return 0;
   }

   for(int i=0; i<n1;i++){
    freqTable[str1[i]]++;
   }
    for(int i=0; i<n2;i++){
    freqTable[str2[i]]--;
   }
   for(int i=0; i<256; i++){
       if(freqTable[i] != 0)
       return 0;
   }
   return 1;
}