#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];

    for (int i = 0; i < n1; ++i)
        left[i] = arr[i + low];
    for (int j = 0; j < n2; ++j)
        right[j] = arr[j + mid + 1];

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];
}

void mergreSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergreSort(arr, l, m);
        mergreSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {10, 15, 20, 11, 30, 100, 4, 2, 1, 6, 8, 3};
    int l = 0, r = sizeof(arr) / sizeof(arr[0]) - 1;
    mergreSort(arr, l, r);
    for (int i : arr)
        cout << i << " ";
    return 0;
}
