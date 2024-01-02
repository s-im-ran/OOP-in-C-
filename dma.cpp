//dynamically allocating memory using new and delete
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p=new int(13);
    cout<<*p;
    int size; //how many variables i want to create
    cout<<"enter the size of an array";
    cin>>size;
    int *array=new int[size];
    cout<<"enter "<<size<<" values";
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        array[i]=x;
    }
    delete p;
    cout<<*p;
    delete []array;
    for(int j=0;j<size;j++)
    {
        
        cout<<array[j]<<endl;
    }
    return 0;
}