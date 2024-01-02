//when function wiht same signature(return type and arg list is present in both base and virtual class)


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
        base1::disp();
    }

};
int main()
{
    derived d;
    d.base1::disp();
    cout<<endl;
    d.base2::disp();
    cout<<endl;
    d.disp();
    return 0;
}