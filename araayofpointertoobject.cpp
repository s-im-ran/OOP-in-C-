#include<bits/stdc++.h>
using namespace std;
class shop
{
    public:
    int item1;
    int item2;

    void getd(int a,int b)
    {
        item1=a;
        item2=b;
    }

    void showd()
    {
        cout<<"the values of the items are "<<item1<<" "<<item2<<endl;
    }

};
int main()
{
    int size;
    cout<<"enter the number of objects you want to create";
    cin>>size;
    shop *ptr=new shop[size];
     shop *ptr1=ptr;
    int p,q;
    for(int i=0;i<size;i++)
    {
        cout<<"enter the quantity for item1 and item2";
        cin>>p>>q;
        ptr->getd(p,q);
        ptr++;
    }
   
    for(int i=0;i<size;i++)
    {
        ptr1->showd();
        ptr1++;
    }
    return 0;
}