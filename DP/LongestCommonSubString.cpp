//https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<=m;i++){
            dp[0][i]=0;
        }
        int result=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(S1[i-1]==S2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                    //need to store the state which has the max result
                    result = max(result,dp[i][j]);
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
        // for(int i=0;i<=n;i++){
        //     for(int j=0;j<=m;j++)
        //         cout<<dp[i][j]<<" ";
        //     cout<<endl;
        // }
 
        return result;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
