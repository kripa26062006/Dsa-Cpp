 vector<int> Solution::solve(vector<int> &a) {
    int k = *std::max_element(a.begin(), a.end());
    vector<int> fact(k+1, 0);
    int n = a.size();
  
    for (int i = 1; i <=k; i++) {
        for (int j = i; j <= k; j += i) {
            fact[j]++;
        }
    }
    
    vector<int> result;
    for (int i = 0; i<n; i++) {
        result.push_back(fact[a[i]]);
    }
    
    return result;
}