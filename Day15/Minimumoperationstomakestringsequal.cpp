#include <bits/stdc++.h> 
int minimumOperations(string &a, string &b)
{
    if (a.size() != b.size())
        return -1;
    int ans=0;
    int n=a.length();
    for(int i=0;i<n/2;i++)
    {
        unordered_map<char,int>mp;
        mp[a[i]]++;
        mp[b[i]]++;
        mp[a[n-1-i]]++;
        mp[b[n-1-i]]++;
        int sz=mp.size();
        if(sz==4)
            ans+=2;
        else if(sz==3)
            ans+=1+(a[i]==a[n-1-i]);
        else if(sz==2)
            ans+=mp[a[i]]!=2;
    }
    if(n%2==1 && a[n/2]!=b[n/2])
        ans++;
    return ans;
}
