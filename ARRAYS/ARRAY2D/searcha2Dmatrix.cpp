class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if(matrix.empty()) return false;

        int N = matrix.size();
        int M = matrix[0].size();

        int i = 0;
        int j = M - 1;

        while(i < N && j >= 0){

            if(matrix[i][j] == target){
                return true;
            }
            else if(matrix[i][j] < target){
                i++;
            }
            else{
                j--;
            }
        }

        return false;
    }
};
