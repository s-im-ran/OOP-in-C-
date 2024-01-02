//functions used with the qualifier const it cannot alter any data
//if it does error message is generated
//it has to be applied both in declaration and defintiton

#include<bits/stdc++.h>
using namespace std;
class abc
{
    public :
    int a,b;
    abc(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    // void test() const{
    //     a=a+5;
    // }
  //if  afucntion is made constant it cannot alter the values of its data members
};
int main()
{
    return 0;
}