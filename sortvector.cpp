#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v ={10,9,5,2,11};
    sort(v.begin(),v.end());
    for(auto i =v.begin();i!=v.end();i++) cout<<*i<<" ";
    cout<<endl;
    for(int i:v) cout<<i<<" ";
    return 0;
}
