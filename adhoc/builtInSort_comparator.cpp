#include <iostream>
#include <algorithm>
using namespace std;

//writing the comparator function

bool compare(int a, int b)
{
    //ascending
    cout << " compare call from " << a << " " << b << endl;
    return a < b;
    //decending
    // return a > b;
}
int main()
{
    int arr[] = {9, -2, -1, 4, -8, -1, 6, 7};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr + n, compare);
    //inbuilt reverse comparator
    //sort(arr, arr + n, greater<int>());

    for (int a : arr)
    {
        cout << a << endl;
    }
}

##problem 2

#include <bits/stdc++.h>
    using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
        return a.first < b.first;

    else
        return a.second < b.second;
}

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int n = v.size();
    // your code goes here
    sort(v.begin(), v.end(), compare);
    return v;
}