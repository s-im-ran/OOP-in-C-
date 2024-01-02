//pointer to an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6};
    int *ptr;
    ptr=a;
    cout<<*ptr;
    ptr=ptr+2;
    cout<<endl;
    cout<<*ptr;
    cout<<endl;
    ptr=ptr-1;
    cout<<*ptr;
    return 0;
}