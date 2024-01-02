//creating a template to swap
//overloading of templates
#include<bits/stdc++.h>
using namespace std;
template <typename t>
void swp(t &x ,t &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
template <typename t1,typename t2>
void swp(t1 a,t2 b)
{
    cout<<a<<" "<<b;
}
int main()
{
    int a=5,b=3;
    swp<int>(a,b);
    cout<<a<<" "<<b;
    cout<<endl;
    float c=4.5,d=9.0;
    swp<float>(c,d);
    cout<<c<<" "<<d;
    cout<<endl;
    int a1=9;float b1=4.80;
    swp(a1,b1);
   
    return 0;
}