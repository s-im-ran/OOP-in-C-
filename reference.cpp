//refernce can be used in three ways
//1.as an alias of another variable
//used to pass object as reference known as call by refrence
//return by reference -using this we can have a function call on the left side


#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b) //call by reference
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int& max(int &a,int &b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int x=10;
    int &p=x;  //2.alias of another b=variable //copy on one reflects on the another
    cout<<p<<endl;
    int a=5,b=10;
    swap(a,b);
    cout<<a<<b<<endl;
    max(a,b)=-1;
    cout<<a<<" "<<b;
    return 0;
}

