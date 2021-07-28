#include <iostream>
using namespace std;
int main()
{
    int arr[] = {8, 9, 2, 4, 6, 31, 8, 3, 8};
    int hash[100] = {0};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < 100; i++)
    {
        while (hash[i] != 0)
        {
            cout << i << " ";
            hash[i]--;
        }
    }
}