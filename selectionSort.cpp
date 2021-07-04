#include <algorithm>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Input" << endl;
    for (int i : arr)
        cout << i << " ";
    for (int i = 0; i < n - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_pos])
                min_pos = j;
        }
        swap(arr[i],arr[min_pos]);
    }
    cout << endl
         << "Output" << endl;
    for (int i : arr)
        cout << i << " ";
    return 0;
}
