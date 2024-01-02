//bonary operator overloading using ember function

#include<bits/stdc++.h>
using namespace std;
class compllex{
    public:
    int r,i;
    compllex()
    {

    };
    compllex(int r,int i)
    {
        this->r=r;
        this->i=i;
    }
 
    void disp()
    {
        cout<<r<<"+ "<<i<<" i "<<endl;
    }
    friend compllex operator+(compllex &,compllex &);
};
   compllex operator+(compllex &j,compllex &c)
    {
        compllex obj;
        obj.r=j.r+c.r;
        obj.i=j.i+c.i;
        return obj;

    }
int main()
{
    compllex c1(2,2),c2(3,3);
    compllex c3=c1+c2;
    c1.disp();
    c2.disp();
    c3.disp();
    return 0;
}