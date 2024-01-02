//can perform runtime polymorphism using virtual pointers
//to perform run time polymorphism we must use a base class pointers
#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    
    virtual void show()
    {
        cout<<"base class"<<endl;
    }
};
class derived:public base
{
    public:

    void show()
    {
        cout<<"derived class"<<endl;
    }
};
int main()
{
    base b;
    derived d;
    base *bptr;
    bptr=&b;
    bptr->show();   //print the show function of base class
    bptr=&d;
    bptr->show();   //print the show function of the derived class
    return 0;
}