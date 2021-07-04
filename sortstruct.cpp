#include<iostream>
#include<algorithm>
using namespace std;

struct Point
{
    /* data */
    int x,y;
};

bool mycmp(Point p1, Point p2)
{
    return( p1.x < p2.x);
}

int main(int argc, char const *argv[])
{
    Point arr[] = {{3,10},{2,8},{5,10}};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,mycmp);
    for(auto i: arr) cout<<i.x<<" "<<i.y<<endl;
    return 0;
}
