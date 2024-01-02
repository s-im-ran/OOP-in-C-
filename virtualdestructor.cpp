//we cannot have a virtual constructor
//we surely can have a virtual destructor

//we need a virtual destructor because when we delete a pointer of base class type that points to the derived class object only the
//base class object is deleted due to the early bind of the compile.This leads to memory leak ,hence we use a virtual destructor in base class
//this deletes both base and derived class object

#include<bits/stdc++.h>
using namespace std;
class base
{
    public:
    virtual ~base()    //if we rwemove the virtual keyword only the base class destructor will be called 
    {
        cout<<"base class destructor"<<endl;
    }
};
class derived:public base
{
    public:
    ~derived()
    {
        cout<<"derived class destructor"<<endl;
    }
};
int main()
{
    
    base *ptr=new derived;
    delete ptr;
    return 0;
}