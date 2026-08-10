int n = A.size();
int ans = 0;
for(int i = 0; i < n; i++) {  // Add "int" before i
    ans = gcd(ans, A[i]);      // Capital A for array
}
return ans;