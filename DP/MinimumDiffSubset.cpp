//https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    //calculating sum of all the elements arr
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    bool dp[n+1][sum+1];
	    //initializing the DP array
	    //row
	    for(int i=0;i<=n;i++){
	        dp[i][0]=true;
	    }
	    //cols
	    for(int i=1;i<=sum;i++){
	        dp[0][i]=false;
	    }
	    
	    //processing the DP States
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            if(arr[i-1]<=j){
	                dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
	            }
	            else{
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    //Check min(Range - (2 * s1))
	    int mini=INT_MAX;
	    for(int i=0;i<=sum/2;i++){
	        if(dp[n][i]){
	            if(mini>(sum-2*i))
	                mini=sum-2*i;
	        }
	    }
	    return mini;
	}
	
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
