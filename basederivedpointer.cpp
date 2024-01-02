#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    int x=100;
    void show()
    {
        cout<<"base class"<<endl;
    }
};
class derived:public base
{
    public:

    void disp()
    {
        cout<<"derived class"<<endl;
    }
};
int main()
{
    base *bptr;
    bptr=new base;
    bptr->show();
    bptr=new derived;
    cout<<bptr->x;     //using a base pointer we can only access the members inherited by the base class
    //bptr->disp(); //using a base pointer we cannot access the members of the derived class
    return 0;
}