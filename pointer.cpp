#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x=14;
   //use of pointer
   int *px=&x;
   cout<<"the value of x is"<<x<<endl;
   cout<<"the address of x is"<<px<<endl;
   cout<<"the value of x using pointer variable is "<<*px<<endl;
   //use of pointer to a pointer 
   int **pp=&px;
   cout<<"the value of px is"<<px<<endl;
   cout<<"the value px using pointer is "<<*pp<<endl;
   cout<<"the address of px is "<<&px<<endl;
   cout<<"the address of px is"<<pp<<endl;
   cout<<"the value of x ix"<<**pp;
   //cout<<
    return 0;
}