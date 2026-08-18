class Solution {
public:
    int sumSubseqWidths(vector<int>& nums) {
        long long mod = 1e9 + 7;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        vector<long long> power(n);
        power[0] = 1;
        for (int i = 1; i < n; i++) {
            power[i] = (power[i-1] * 2) % mod;
        }
        
        long long ans = 0;
        for (int i = 0; i <= n-1; i++) {
            long long left_power = power[i];
            long long right_power = power[n-1-i];
            
            long long cont = (long long)nums[i] * ((left_power - right_power) % mod);
            cont = ((cont % mod) + mod) % mod;  
            ans = ans + cont;
            ans = ans % mod;
        }
        return (int)ans;
    }
};