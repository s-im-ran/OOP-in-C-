//member function templates

#include<bits/stdc++.h>
using namespace std;
template<typename t1,typename t2>
class runner
{
    public:
    t1 a;
    t2 b;
    void disp(t1 x,t2 y);
};
template <typename t1,typename t2>
    void runner<t1,t2>::disp(t1 z,t2 y)
    {
        a=z;
        b=y;
        cout<<a<<" "<<b<<endl;
    }

int main()
{
    runner <int,float>r;
    r.disp(6,7.9); 
    return 0;
}