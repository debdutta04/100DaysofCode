#include <bits/stdc++.h> 
vector<int> sort(int n, vector<int> &arr)
{
    // Write your code here.
    int max=arr[0];
    int min=arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
           max=arr[i];
        if(arr[i]<min)
           min=arr[i];   
    }
    int correctionfactor=abs(min);
    
    for(int i=0;i<n;i++)
    {
        arr[i]+=correctionfactor;
    }
    
    vector<int> count(max+correctionfactor+1,0);
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    
    for(int i=1;i<count.size();i++)
    {
        count[i]+=count[i-1];
    }
    vector<int> ans(n);
    
    for(int i=n-1;i>=0;i--)
    {
        ans[count[arr[i]]-1]=arr[i]-correctionfactor;
        count[arr[i]]--;
    }
    return ans;
}