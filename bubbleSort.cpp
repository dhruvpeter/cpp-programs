#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {5, 1, 7, 2, 4, 9, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Input" << endl;
    for (int i : arr)
        cout << i << " ";
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        if(swapped == false)    break;
    }
    cout << endl
         << "Output" << endl;
    for (int i : arr)
        cout << i << " ";

    return 0;
}
