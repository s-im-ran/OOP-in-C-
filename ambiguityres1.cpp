//in multiple inheritance if more than 1 base class has a fun with same name ,then ambuigity arises.
//this is how to solve it

#include<bits/stdc++.h>
using namespace std;
class base1
{
    public:
    void disp()
    {
        cout<<"function of base class 1";
    }
};
class base2
{
    public:
    void disp()
    {
        cout<<"function of base class 2";
    }
};
class derived:public base1,public base2
{
    public:
    void disp()
    {
        base1::disp();//one way to solve the ambiguity.
    }

};
int main()
{
    derived d;
    d.base1::disp();//one way is to use scope resolution operator here
    cout<<endl;
    d.base2::disp();
    cout<<endl;
    d.disp();
    return 0;
}