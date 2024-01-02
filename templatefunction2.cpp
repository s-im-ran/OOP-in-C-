#include<bits/stdc++.h>
using namespace std;
template<typename t>
void bubblesort(t a[],t n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{
    int a[]={4,5,1,-9,0};
    float b[]={4.4,5.2,1.5,-9.3,0.1};
    bubblesort<int>(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bubblesort<float>(b,5);
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}