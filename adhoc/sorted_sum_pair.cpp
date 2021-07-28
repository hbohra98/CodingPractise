#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    for(int i=0;i<arr.size();i++)
     cout<<arr[i]<< " ";
     cout<<endl<<x;
    pair<int, int> ans;
    int n = arr.size();
    int curr_diff=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(x-(arr[i]+arr[j]))<curr_diff){
                ans.first = arr[i];
                ans.second = arr[j];
                curr_diff = abs(x-(arr[i]+arr[j])) ;
                cout<<"===="<<abs(x-(arr[i]+arr[j]))<<endl;
            }
        }
    }
    return ans;
}