#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
   

    stack<char>st;
    for(int i=0; i<pattern.length(); i++){
        if(st.empty()){
            st.push(pattern[i]);
        }
          //check the top elements
        else if(st.top()=='(' && pattern[i]==')'){
            st.pop();
        }
        else{
            st.push(pattern[i]);
        }
    }   return st.size();
}
