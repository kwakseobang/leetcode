class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size(); //
        int col = grid[0].size();
        vector<vector<int>> dp (row,vector<int>(col,0)); //초기화
        dp[0][0] = grid[0][0];
        //각 끝라인 합 
        for(int i = 1; i< row; i++){ 
            dp[i][0] = grid[i][0] + dp[i-1][0];
        }
        for(int i = 1; i< col; i++){
            dp[0][i] = grid[0][i] + dp[0][i-1];
        }
        for(int i = 1; i <row; i++){
            for(int j = 1; j<col; j++){
                dp[i][j] = min((grid[i][j]+dp[i-1][j]),(grid[i][j]+dp[i][j-1]) );
            }
        }
        return dp[row-1][col-1];
    }
};