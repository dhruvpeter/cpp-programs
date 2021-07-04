#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, h);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 2, 7, 1, 9, 10, 3, 4};
    quickSort(arr, 0, 7);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}
