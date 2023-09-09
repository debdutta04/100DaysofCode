int makeBeautiful(string str) {
	int ans =0;
	int len = str.length();
	
	for(int i=0; i< len; i++){

		
	//If there is 1 at Even index positions
	if(i%2 == 0 && str[i] == '1')
		ans++;
	
	//If there is 0 at odd index positions
	if(i%2 != 0 && str[i]=='0')
		ans++;
	
}
	return min(ans, len-ans);
}
