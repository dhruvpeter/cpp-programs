#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {10,9,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<"Ascending order"<<endl;
    for(int x: arr)
        cout<<x<<" ";
    cout<<endl<<"Descending order"<<endl;
    sort(arr,arr+n,greater<int>());
    for(int x: arr)
        cout<<x<<" ";
    
    return 0;
}