#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{     
    sort(arr,arr+n);
  // It starts with the value 1, as the task is to find the smallest missing positive integer.
    int ans=1;
    for(int i=0; i<n; i++){
      //If the current element is less than or equal to 0, it's not a positive integer,
      //so the loop moves on to the next iteration using the continue statement.
        if(arr[i] <= 0)
        continue;
          // it means that the current element doesn't represent a missing positive integer.
          //In this case, ans is incremented by 1,
          //as the next potential missing integer should be the next consecutive positive integer.
        else if(arr[i]==ans)
        ans++;
          // If the current element is not equal to ans,
          //it means a gap has been found between the expected positive integers and the elements in the array. 
        else
        break;
    }
    return ans;
}
