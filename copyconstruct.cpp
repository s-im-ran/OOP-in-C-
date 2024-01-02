//a program to show that we dont need to explicitky define a copy constructor


#include<bits/stdc++.h>
using namespace std;
class abc
{
    public:
    int a;
    void disp()
    {
        cout<<"A "<<a;
    }
};
int main()
{
    abc r;
    r.a=10;
    r.disp();
    abc b(r);
    cout<<endl;
    b.disp();
    return 0;
}