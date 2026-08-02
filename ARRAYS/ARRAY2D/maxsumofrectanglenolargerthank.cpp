class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int N = matrix.size();     
        int M = matrix[0].size();  
        int best = INT_MIN;
        for (int left = 0; left < M; left++) {
        vector<int> rowSum(N, 0);   

            for (int right = left; right < M; right++) {
              for (int i = 0; i < N; i++) {
                    rowSum[i] += matrix[i][right];
                }
                 set<int> sortedSet;
                sortedSet.insert(0);   
                int prefixSum = 0;
                for (int i = 0; i < N; i++) {
                    prefixSum += rowSum[i];
                    auto it = sortedSet.lower_bound(prefixSum - k);
                    if (it != sortedSet.end()) {
                        int candidate = prefixSum - (*it);
                        best = max(best, candidate);
                    }
                    sortedSet.insert(prefixSum);
                }
            }
        }

        return best;
    }
};
        
    
