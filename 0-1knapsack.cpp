//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#

int solve(vector<int>& weights, vector<int>& values, int capacity) {
    int n=values.size()+1;
    int dp[n+1][capacity+1];
    //initatilizing the rows
    for(int i=0;i<n+1;i++){
        dp[i][0]=0;
    }
    //initatilizing the cols
    for(int i=0;i<capacity+1;i++){
        dp[0][i]=0;
    }
    //running the DP processing loops
    for(int i=1;i<n+1;i++){
        for(int j=1;j<capacity+1;j++){
            if(weights[i-1]<=j)
            {
                dp[i][j] = max(values[i-1]+dp[i-1][j-weights[i-1]], 
                                dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][capacity];
}
