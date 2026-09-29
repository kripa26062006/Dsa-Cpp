int Solution::solve(vector<int> &a) {
    unordered_set<int> seen;
     seen.insert(0);
    
    int n = a.size();
    int prefixSum = 0;
    
    for (int i = 0; i < n; i++) {
       prefixSum = prefixSum + a[i];
      if (seen.count(prefixSum) > 0) {
    return 1;
}
 else {
seen.insert(prefixSum);
    }
    
}
 return 0;
}