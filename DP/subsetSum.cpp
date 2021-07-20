//https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&page=4&query=category[]Dynamic%20Programmingpage4category[]Dynamic%20Programming#


#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        vector<vector<bool>> dp;
        for(int i=0;i<=N;i++){
            vector<bool> temp;
            for(int j=0;j<=sum;j++){
                temp.push_back(false);
            }
            dp.push_back(temp);
        }
        for(int i=0;i<=N;i++)
            dp[i][0]=true;
        for(int i=1;i<=sum;i++)
            dp[0][i]=false;
        
        for(int i=1;i<=N;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<=j){
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[N][sum];
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
