#include<bits/stdc++.h>
using namespace std;
class compound
{   public:
    int r,i;
    compound(int r,int i)
    {
        this->r=r;
        this->i=i;
    }
    compound()
    {
        r=0;
        i=0;
    }
    friend compound add(compound &c);

    void display()
    {
        cout<<"the complex number is "<<r<<" + "<<i<<" i "<<endl;
    }
};
compound add(compound &c)
{
    compound comp;
    comp.r=c.r+5;
    comp.i=c.i+5;
    return comp;

}
int main()
{
    compound c(7,5);
    c.display();
    add(c).display();
    return 0;
}
