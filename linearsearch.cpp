//linear search using pointer arithmetic
//pointer to an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6};
    int x=1; //element to be searched
    int *ptr=a; //or *ptr=&a[0];  both syntax is correct //pointer to an array
    int f=0;
    for(int i=0;i<6;i++)
    {
        if(*ptr==x)
        {
            cout<<"elemnt is present";
            f=1;
            break;
        }
        ptr++;
    }
    if(f==0)
        cout<<"element is not found";
    return 0;
}