int singleNonDuplicate(vector<int>& arr)
{	
	int n =arr.size();
	if(n==1) return arr[0];
	if(arr[0] != arr[1]) return arr[0];
	if(arr[n-1] != arr[n-2]) return arr[n-1];

	int low = 1, high = n-2;
	while(low <= high){
		int mid = low+ (high - low)/2;
		if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]){
			return arr[mid];
		}
		//we are in left 
		if(mid % 2==1 && arr[mid] == arr[mid-1]
		 || mid %2==0 && arr[mid] == arr[mid+1]){
			//right search
			low = mid+1;
		}else{
			//we are in right 
			high = mid -1;//left search
		}
	}
	return -1;
}
