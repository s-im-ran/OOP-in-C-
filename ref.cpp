#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int x=100;
    // int &rx=x;
    // cout<<x<<endl;
    // x=x+10;
    // cout<<rx;
    // cout<<"\n";
    int d=12;
    int *p=&d;
    int &q=*p;
    cout<<*p<<endl;
    cout<<q<<endl;
    return 0;
}