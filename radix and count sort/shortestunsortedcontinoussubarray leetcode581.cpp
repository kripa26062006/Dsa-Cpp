class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
    int n = nums.size();
    int mx = nums[0];
    int right = -1;
for (int i = 0; i < n; i++) {    
    if (nums[i] < mx) {
            right = i;
    }
         mx = max(mx, nums[i]);
    }
        int mn = nums[n - 1];
          int left = -1;
     for (int i = n - 1; i >= 0; i--) {
        if (nums[i] > mn) {
            left = i;
        }
           mn = min(mn, nums[i]);
     }
    if (right == -1 && left == -1) {
        return 0;
    }
      return right - left + 1;
}
};