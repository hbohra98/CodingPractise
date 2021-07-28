#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int curr_sum = 0,n=A.size();
    int max_sum = 0;
    for(int i=0;i<n;i++){
        curr_sum += A[i];
        if(curr_sum<0){
            curr_sum = 0;
        }
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}