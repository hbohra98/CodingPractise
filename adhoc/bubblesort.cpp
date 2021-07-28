//idea is : water on a gas and bubble forming so highest element goes to the end

#include <iostream>
using namespace std;
int bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/*
#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> arr){
    // your code  goes here
    
    int n = arr.size();
   // vector<int> a;
     for (int i = 0; i < n; i++)
    {
        bool flag=false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag=true;
            }
        }
        if(flag)
            break;
    }
    return arr;
    
}
*/
int main()
{
    int arr[] = {-2, -3, 8, 7, 9, -1};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}