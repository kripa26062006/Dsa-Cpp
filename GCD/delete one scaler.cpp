for(int i = 0; i < n; i++) {
    if(i == 0) 
        gcd_after_deletion = suffix[1];           
    else if(i == n-1) 
        gcd_after_deletion = prefix[n-2];       
    else 
        gcd_after_deletion = __gcd(prefix[i-1], suffix[i+1]);  
    
    ans = max(ans, gcd_after_deletion);
}