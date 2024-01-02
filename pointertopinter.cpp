//playing with pointer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z=10;
    int *ptr,**ptr1;
    ptr=&z;
    ptr1=&ptr;
    cout<<"the address of z"<<ptr<<" and its value is "<<*ptr;
    cout<<"the address of ptr"<<ptr1<<" and its value is "<<*ptr1;
    ptr=ptr+2;
    ptr1=ptr1+2;
    cout<<endl;
    cout<<"the address of z"<<ptr;
    cout<<"the address of ptr"<<ptr1;
    return 0;
}