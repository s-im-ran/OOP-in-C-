#include <bits/stdc++.h>
using namespace std;
class bank
{   public:

    int acc;
    bank()
    {
        acc=0;
    }
    bank(int val)
    {
        acc=val;
        
    }
    bank(bank &bankobj)
    {
        acc=bankobj.acc;
        cout<<"copy constructor is called"<<endl;
    }
    void display()
    {
        cout<<"the value of the bank account number is "<<acc<<endl;
    }
};
int main()
{
    bank b,b1(10),b3;
    b.display();
    b1.display();
    bank b2(b1);//copy cpnstructor is invoked
    b2.display();
    b3=b1;
    b1.display();
    bank b4=b1; //copy constructor is invoked
    b4.display();
}