//overloading unary using both friend function and member functionsessse
#include<bits/stdc++.h>
using namespace std;
class inverse
{
    public:
    int x;
    inverse(int x)
    {
        this->x=x;
    }
    // void operator-()
    // {
    //     x=-x;
    // }
   friend void operator+(inverse&);
    
    void disp()
    {
        cout<<x<<endl;
    }
};
void operator+(inverse &in)
{
    in.x=in.x*2;
    }
int main()
{
    inverse in(10);
    in.disp();
    +in;
    in.disp();
}
