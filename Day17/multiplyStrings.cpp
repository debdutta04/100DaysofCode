#include <bits/stdc++.h>


string multiplyStrings(string a , string b ){
    //Write your code here
    if(a=="0"||b=="0"){return "0";}

    vector<int> ans(a.size()+b.size(),0);

    for(int i=a.size()-1; i>=0; i--){
        for(int j=b.size()-1; j>=0; j--){
            int p = (a[i]-'0')*(b[j]-'0');
            ans[i+j+1]+=p;
            ans[i+j]+=(ans[i+j+1]/10);
            ans[i+j+1]%=10;
        }
    }

    string op = "";

    for(int i=0; i<a.size()+b.size(); i++){
        if(i==0 && ans[i] == 0){continue;}
            char temp = ('0'+ans[i]);
            op+=temp;
    }

    return op;
}
