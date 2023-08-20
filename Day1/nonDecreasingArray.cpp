#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
     for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                 if(i-1>=0&&arr[i-1]>arr[i+1])
                {
                    arr[i+1]=arr[i];
                }
                else
                {
                    arr[i]= arr[i+1];
                }
                break;
            }
        }
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]> arr[i+1])
            {
                return false;
            }
        }
        return true; 
     
}
}
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    bool ans = isPossible(arr, n);
    cout<<ans;
    return 0;
}
