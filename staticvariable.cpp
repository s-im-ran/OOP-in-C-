//to play around with static
//visibility -in the fucntion block but scope in the entire program;
//its initial value is zero;
//all objects share a copy of a static variable
//it can be declared inside  a class but it has to be defined /assigned globally

#include<bits/stdc++.h>
using namespace std;
class animal
{
    public:
    static int count;
    animal()
    {
        count++;
    }
};
int animal:: count=0;
int main()
{
    animal zebra,horse,cat;
    cout<<"the count of animals is"<<animal::count;
    return 0;
}
