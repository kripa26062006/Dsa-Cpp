class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        vector<vector<int>> ans;
        int s = newInterval[0], e = newInterval[1];
        bool inserted = false;
        int i = 0;

        while (i < n) {
            if (intervals[i][1] < s) {
                ans.push_back(intervals[i]);
                i++;
            } else if (intervals[i][0] > e) {
                if (!inserted) {
                    ans.push_back({s, e});
                    inserted = true;
                }
                ans.push_back(intervals[i]);
                i++;
            } else {
                s = min(s, intervals[i][0]);
                e = max(e, intervals[i][1]);
                i++;
            }
        }

        if (!inserted) ans.push_back({s, e});
        return ans;
    }
};