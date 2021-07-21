//target sum
//https://leetcode.com/problems/target-sum/

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        //s1+s2=sum(nums)
        
        int sum=0,n=nums.size();
        //base case when only one element is present in the nums array
        if(n==1){
            if(nums[0]==abs(target))
                return 1;
            else
                return 0;
        }
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
         
        /*
    +-+-++-+ = s1(++++) - s2(+++++)
        
        s1+s2=sum
        s1-s2=target
     =========================
        2s1 = sum + target
     =========================
        s1 = (sum + target) / 2
        */
        
        //we will find no. of ways to get 
        //Edge case to check if the sum isnt even then there isnt posssible way to get the 
        //s1 values as decimal
        if((sum + target)%2 !=0 )
            return 0;
        int s1 = (sum + target) / 2;
        int dp[n+1][s1+1];
        
        //row
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        //col
        for(int i=1;i<=s1;i++){
            dp[0][i]=0;
        }
        //process DP states
        for(int i=1;i<=n;i++){
            for(int j=0;j<=s1;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]] + dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
    /*
    debug
    for(int i=0;i<=n;i++){
            for(int j=0;j<=s1;j++)
            {
                cout << dp[i][j]<<" ";
            }
            cout<<endl;
        }
        */
        return dp[n][s1];
    }
};
