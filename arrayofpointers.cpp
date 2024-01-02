#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *arr[5];
    for(int i=0;i<5;i++)
    {
        arr[i]=new int(i);
    }
    for(int i=0;i<5;i++)
    {
        cout<<*arr[i]<<endl;
    }
    delete[] arr;
    
    return 0;
}