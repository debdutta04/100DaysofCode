#include <bits/stdc++.h> 
string encode(string &message)
{   
    string ans;
    int cnt=1;
    char s= message[0];

    for(int i=1; i<=message.length();i++){
        //If the current character message[i] is equal to 
        //the previous character s, it means that the same character
        // is encountered consecutively. In this case, the cnt counter 
        //is incremented.
        if(message[i]==s){
            cnt++;
        }
 //If the current character message[i] is different from the previous character s, it means a new character sequence has begun. 
 //In this case, the following steps are performed:
//The previous character message[i - 1] is appended to the ans string.
//The count cnt of consecutive occurrences of the previous character is converted to a string using the to_string function,
// and the result is appended to the ans string.
//The cnt counter is reset to 1 to start counting the occurrences of the new character sequence.
//The variable s is updated to hold the value of the current character, as it becomes the new character to track for consecutive occurrences.
        else{
            ans+= message[i-1];
            ans+= to_string(cnt);
            //update cnt and s 
            cnt=1;
            s = message[i];
        }
    }
    return ans;
   
}
