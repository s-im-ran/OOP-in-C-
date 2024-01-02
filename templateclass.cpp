#include<bits/stdc++.h>
using namespace std;
template <typename t>
class defaults
{
    public:
    t *arr;
    t n;
    defaults(t a[],t n)
    {
        arr=new t[n];
        this->n=n;
        for(int i=0;i<n;i++)
        {
            arr[i]=a[i];
        }
    }

    void disp()
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    int a[]={2,3,4,5,6};
    defaults<int> d(a,5);
    d.disp();
    return 0;
}