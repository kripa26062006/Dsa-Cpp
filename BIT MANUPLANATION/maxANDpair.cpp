 class Solution {
public:
    int findMaximumAND(vector<int>& nums) {
        set<int> candidates(nums.begin(), nums.end());
        int ans = 0;
        
        for (int i = 29; i >= 0; i--) {
            set<int> newCandidates
            for (int num : candidates) {
                if (num & (1 << i)) {
                    newCandidates.insert(num);
                }
            }
             if (newCandidates.size() >= 2) {
                ans |= (1 << i);  
                candidates = newCandidates;  
             }
        }
        
        return ans;
    }
}; 