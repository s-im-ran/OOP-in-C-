#include <bits/stdc++.h>
using namespace std;

int main()
{
    //bitwise and or xor
    int x=2;
    int y=3;
    cout<<"2 and 3 "<<(2 & 3)<<endl;
    cout<<"2 or 3 "<<(2 | 3)<<endl;
    cout<<"2 xor 3 "<<(2 ^ 3)<<endl;
    //bitwise left shift and bitwose right shift
    int z=x<<y;
    cout<<z<<endl;
    float r=x>>y;
    cout<<r<<endl;
    //bitwsie not using ~ operator 
    cout<<~6;
    cout<<endl<<~-5;
    return 0;
}