class NumMatrix {
    private:
    vector<vector<int>> pf;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = n== 0 ? 0:matrix[0].size();
        pf.assign(n+1,vector<int>(m+1,0));
        for (int i =1 ; i<=n;i++){
            for(int j=1;j<=m;j++){
             pf[i][j]= matrix[i-1][j-1]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
           }
     }

        
 }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int r1 = row1+1 , c1 = col1+1;
        int r2 = row2+1 , c2 = col2+1;
       return pf[r2][c2] - pf[r1-1][c2] - pf[r2][c1-1] + pf[r1-1][c1-1];
        
    }
};

