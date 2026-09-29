class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset;
        int maxlength = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            numset.insert(nums[i]);
        }
        
        for (int x : numset) {  
            if (numset.count(x - 1) == 0) {
                int currentNum = x;
                int count = 0;
                
                while (numset.count(currentNum) > 0) {
                    count++;
                    currentNum++;
                }
                
                maxlength = max(maxlength, count);
            }
        }
        
        return maxlength;
    }
};