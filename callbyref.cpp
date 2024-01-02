//call by refernce -to swap two variables;
void funsum(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;

}
#include<bits/stdc++.h>
using namespace std;
int main()
{   int a=20,b=5;
    cout<<"the value of a and b are"<<a<<" "<<b<<endl;
    funsum(a,b);
    cout<<"the value of a and b are"<<a<<" "<<b<<endl;
    return 0;
}