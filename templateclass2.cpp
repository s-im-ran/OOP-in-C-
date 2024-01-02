//template class with multiple parameters
#include<bits/stdc++.h>
using namespace std;
template<typename t1,typename t2>
class runner
{
    public:
    t1 a;
    t2 b;
    runner(t1 z,t2 y)
    {
        a=z;
        b=y;
    }
    void disp()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    runner <int,float>r(8,9.20);
    r.disp(); 
    return 0;
}