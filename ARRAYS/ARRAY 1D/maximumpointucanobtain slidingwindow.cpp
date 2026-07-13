class Solution {
    public:
        int maxScore(vector<int>& cardPoints, int k) {
            int n = cardPoints.size();
             int total = 0;
for(int i = 0; i < n; i++){
    total += cardPoints[i];
} 

int window_sum = 0;
for(int i = 0; i < n-k; i++){
   window_sum += cardPoints[i];
}
int min_window_sum=window_sum;
for ( int i=n-k;i< n;i++){
window_sum = window_sum - cardPoints[i-(n-k)] + cardPoints[i];
min_window_sum = min(min_window_sum, window_sum);
}
return total - min_window_sum ;
    }  
};