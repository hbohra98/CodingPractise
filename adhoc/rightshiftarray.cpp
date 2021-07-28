#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    
    int n=a.size();
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[i] = -1;
    }
    for(int i=0;i<a.size();i++){
        ans[(i+k)%(n)] = a[i]; 
    }
    return ans;
}