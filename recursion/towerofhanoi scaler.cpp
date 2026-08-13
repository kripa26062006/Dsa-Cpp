  void hanoi(int a, int s, int h, int d, vector<vector<int>>& res) {
    if (a == 0) {
        return;
    }
    
    hanoi(a-1, s, d, h, res);       
    res.push_back({a, s, d});      
    hanoi(a-1, h, s, d, res);
}

vector<vector<int>> solveHanoi(int a) {
    vector<vector<int>> res;
    hanoi(a, 1, 2, 3, res);
    return res;
}