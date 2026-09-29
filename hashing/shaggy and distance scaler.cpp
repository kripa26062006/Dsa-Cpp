int Solution::solve(vector<int> &a) {
    unordered_map<int, int> mp;
    int n = a.size();
    int minDist = INT_MAX;

    for (int i = 0; i < n; i++) {
        int x = a[i];

        if (mp.count(x) > 0) {
            int dist = i - mp[x];     
            minDist = min(minDist, dist);
        }

        mp[x] = i;  

    }

    if (minDist == INT_MAX) return -1;  
    return minDist;
}