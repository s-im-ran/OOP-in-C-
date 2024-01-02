//template function with parameters of multiple types
#include<bits/stdc++.h>
using namespace std;
template<typename t1,typename t2>
void disp(t1 a,t2 b)
{
    cout<<a<<" "<<b;
}
int main()
{
    disp("abc",12);
    cout<<endl;
    disp(9.8,98);
    return 0;
}