vector<int> Solution::solve(vector<int> &a, int b) {
    int n = a.size();
    int i = 0;
    int j = 0;
    int sum = a[0];
    
    while (j < n) {
        if (sum == b) {
            break;
        }
        else if (sum < b) {
            j++;
            if (j < n) {
                sum += a[j];
            }
        }
        else {
            sum -= a[i];
            i++;
        }
    }
    
    if (sum == b && i <= j) {
        vector<int> ans;
        for (int k = i; k <= j; k++) {
            ans.push_back(a[k]);
        }
        return ans;
    }
    return {-1};
}