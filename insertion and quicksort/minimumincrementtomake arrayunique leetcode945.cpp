class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
           int n = nums.size();
       sort(nums.begin(), nums.end());
       int move =0;
       for (int i=1;i<n;i++){
       while (nums[i]<=nums[i-1]){
         nums[i]+=1;
        move ++;
}
}
   return move;
        
    }
};