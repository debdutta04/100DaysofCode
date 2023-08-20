#include <bits/stdc++.h> 
using namespace std;
bool isPossible(int *arr, int n)
{
  int cnt =0;
  for(int i=1; i<n; i++){
    if(arr[i]<arr[i-1]){
      if(++cnt>1) return false;
        if(i==1 || arr[i-2]<=arr[i]){
                arr[i-1] = arr[i];
            }
            else{
                arr[i]=arr[i-1];
            }
        }
    }
    return 1;
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
