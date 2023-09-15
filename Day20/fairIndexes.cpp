int totalIndexes(vector<int> &A, vector<int> &B) {
    
    int n =  A.size();        
    int i = 0;        
    int x= 0, y = 0;        
    int ans = 0,f=0;        
    while(i<n ){                            
        x += A[i]; y += B[i];i++;                  
        }          
        if(x!=y) return 0;        
        int p =0,q = 0; i = 0;
        while (i < n - 1) {
        p += A[i];
        q += B[i];
        i++;
        if (p == q && p == x - p)
          ans++;
    }

    return ans; 
}
