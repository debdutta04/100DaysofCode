#include <bits/stdc++.h> 
vector<vector<string>> getGroupedAnagrams(vector<string> &inputStr, int n)
{
   map<string, vector<string>>mp;

        for(auto str:inputStr){
            string s=str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto it=mp.begin();it!=mp.end();it++){
         ans.push_back(it->second);
        }
        return ans;
    }
