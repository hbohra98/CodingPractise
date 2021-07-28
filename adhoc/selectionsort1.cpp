#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int curr_min = arr[i];
        int min_index = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < curr_min)
            {
                curr_min = arr[j];
                min_index = j;
            }
        }
        //swap the indexes
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
int main()
{
    int arr[] = {6, 1, 2, -1, 8, 6, 1, -7};
    int n = sizeof(arr) / sizeof(int);
    selectionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
