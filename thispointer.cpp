// You are tasked with implementing a Vector class that represents a two-dimensional vector (x, y) in Cartesian coordinates.
//  Your goal is to overload the addition (+) operator to perform vector addition.
//   The this pointer should be used to access the current object's data members.

// Write a C++ program that demonstrates the Vector class and its overloaded addition operator.
#include<bits/stdc++.h>
using namespace std;
class vectors
{   public:
    int mag,dir;
    vectors()
    {}
    vectors(int mag,int dir)
    {
        this->mag=mag;
        this->dir=dir;
    }

    void disp()
    {
        cout<<"the vector is "<<mag<<" + "<<dir<<endl;
    }
    vectors operator +(vectors &v)
    {
        vectors v1;
        v1.mag=mag+v.mag;
        v1.dir=dir+v.dir;
        return v1;
    }

};


int main()
{
    vectors v1(3,4);
    vectors v2(7,8);
    vectors v3;
    v1.disp();
    v2.disp();
    v3=v1+v2;
    v3.disp();

    return 0;
}