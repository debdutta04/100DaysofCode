int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
     int n=arr.size();
    int count=0;
    int left=0,right=0;
    int sum=arr[0];
    while(right<n)
    {
        while(left<=right &&sum>k)
        {
            sum-=arr[left];
            left++;
        }
        if(sum==k)
        {
            count++;
        }
        right++;
        if(right<n) {
            sum+=arr[right];

        }
        
    }
    return count;
}
