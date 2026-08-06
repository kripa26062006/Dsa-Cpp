class Solution {
public:
   vector<int> singleNumber(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;
    int bit_set = 0;
    
    for (int i = 0; i < n; i++) {
        ans = ans ^ nums[i];
    }
    
    for (int i = 0; i < 32; i++) {
        if (ans & (1 << i)) {
            bit_set = i;
            break;
        }
    }
    
    int set = 0, unset = 0;
    for (int j = 0; j < n; j++) {
        if (nums[j] & (1 << bit_set)) {
            set = set ^ nums[j];
        } else {
            unset = unset ^ nums[j];
        }
    }
    
    return {set, unset};
}
};