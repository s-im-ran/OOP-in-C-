//template class with multiple parameters and one being one template type
#include<bits/stdc++.h>
using namespace std;
template<typename t1,int t2>
class runner
{
    public:
    t1 a;
    int b;
    runner(){}
    runner(t1 z,int y)
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
    runner <int,5>r(8,5);
    r.disp(); 
    return 0;
}