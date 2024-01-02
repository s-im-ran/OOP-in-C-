#include<bits/stdc++.h>
using namespace std;
class Ani
{
    public:
    int x=0;
    void getdata()
    {
        x=x+56;
    }
    void showdata()
    {
        cout<<x;
    }
};
int main()
{
    Ani a;
    a.getdata();
    a.showdata();
    cout<<endl;
    Ani b;
    Ani *ptr=&b;
    // (*ptr).getdata();    //this line is same as ptr->getdata();
    // (*ptr).showdata();   //this line is same as ptr->showdata();
    ptr->getdata();
    ptr->showdata();
    //another way of doing this is
    cout<<endl;
    Ani *pt=new Ani;
    pt->getdata();
    pt->showdata();

    return 0;
}