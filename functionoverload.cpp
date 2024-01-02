//overloading refers to using the same thing for many forms
//here one function prototype is used for many different functions based on the arguments
#include<bits/stdc++.h>
using namespace std;
void area(int r)
{
    cout<<3.14*r*r<<endl;
}
void area(int l,int b)
{
    cout<<l*b;
}
int main()
{
    int r=12;
    int l=6;
    int b=5;
    area(r);
    area(l,b);
    return 0;
}