int Solution::solve(vector<int> &a, vector<int> &b) {
    map<int,int> x, y;
    int ans=0;
    for(int i=0;i<a.size();i++) {
        x[a[i]]++;
        y[b[i]]++;
    }
    for(int i=0;i<a.size();i++) {
        ans=ans+(x[a[i]]-1)*(y[b[i]]-1);
    }
    return ans;
}
int Solution::solve(vector<int> &a, vector<int> &b) {
    map<int,int> x, y;
    int ans=0;
    for(int i=0;i<a.size();i++) {
        x[a[i]]++;
        y[b[i]]++;
    }
    for(int i=0;i<a.size();i++) {
        ans=ans+(x[a[i]]-1)*(y[b[i]]-1);
    }
    return ans;
}
