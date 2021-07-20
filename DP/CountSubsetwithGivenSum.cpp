class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        vector<vector<int>> dp;
        for(int i=0;i<=N;i++){
            vector<bool> temp;
            for(int j=0;j<=sum;j++){
                temp.push_back(-1);
            }
            dp.push_back(temp);
        }
        for(int i=0;i<=N;i++)
            dp[i][0]=1;
        for(int i=1;i<=sum;i++)
            dp[0][i]=0;
        
        for(int i=1;i<=N;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<=j){
                    dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[N][sum];
    }
};
