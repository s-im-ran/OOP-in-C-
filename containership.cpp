//a class can contain objects of different class as its members:known as nesting or containership.
#include<bits/stdc++.h>
using namespace std;
class beta{
    public:
    int b;
    beta(int b)
    {
        this->b=b;
        cout<<b<<" ";
    }
};
class gamma
{
   public:
   int g;
   gamma(int g)
   {
    this->g=g;
    cout<<g<<" ";
   }
};
class Alpha
{
    public:
    beta B;
    gamma C;
    int a;
    Alpha(int a,int b,int c):B(b),C(c)
    {
        this->a=a;
        cout<<a<<" ";
    }


};
int main()
{
    Alpha A(12,20,30);
    return 0;
}