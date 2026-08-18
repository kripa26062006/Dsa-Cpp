
        class Solution {
private:
    static bool compare(vector<int>& a, vector<int>& b) {
        int distA = a[0]*a[0] + a[1]*a[1];
        int distB = b[0]*b[0] + b[1]*b[1];
        return distA < distB;
    }

public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), compare);
        vector<vector<int>> result(points.begin(), points.begin() + k);
        return result;
    }
};
    
