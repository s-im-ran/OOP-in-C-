#include<bits/stdc++.h>
using namespace std;
class animal
{
    public:
    int age;
    animal(int age)
    {
        this->age=age;
    }
    void show()
    {
        cout<<"the age of an animal is "<<age<<endl;
    }
};
int main()
{   
    animal obj1(8);
    int animal:: *ptr=&animal::age;
    cout<<obj1.*ptr;
    return 0;
}