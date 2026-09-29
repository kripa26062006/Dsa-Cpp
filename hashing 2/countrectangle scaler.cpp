int n=a.size();
int ans=0;
unordered_set<long long> st;
for (int i = 0; i < n; i++) {
    long long key = (long long)a[i] * 1000000001LL + b[i];
    st.insert(key);
}
   for (int i=0;i<n;i++){
  for (int j=i+1;j<n;j++){
  long long key1 = (long long)a[i] * 1000000001LL + b[j];
   long long key2 = (long long)a[j] * 1000000001LL + b[i];
 if (a[i]<a[j]&&b[i]<b[j]&& st.count( key1) &&st.count( key2)){
  ans +=1;
}
}
}
 return ans ;
}
// not shoeing output properlyy