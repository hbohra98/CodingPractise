//https://leetcode.com/problems/partition-equal-subset-sum/

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total_sum = 0;
        bool ans;
        for(int i=0;i<nums.size();i++){
            total_sum += nums[i];
        }
        if(total_sum%2==0){
            ans = subset_sum(nums, total_sum/2,nums.size());
        }
        else{
            ans = false;
        }
        return ans;
    }
    bool subset_sum(vector<int> nums,int sum,int n){
        //Create and Initialize DP
        bool dp[n+1][sum+1];
        //initialize rows
        for(int i=0;i<n+1;i++){
            dp[i][0]=true;
        }
        //initialize cols
        for(int i=1;i<sum+1;i++){
            dp[0][i]=false;
        }
        
        //processing the DP states
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
             if(nums[i-1]<=j){
                 dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j]; 
             }
             else{
                 dp[i][j] = dp[i-1][j];
             }
           }
        }
        return dp[n][sum];
    }
};
