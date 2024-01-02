//virtual base class to prevent duplicacy of protected and public data members
#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    string breed;
    Animal(string b)
    {
        this->breed=b;
    }
};
class Mammal:public virtual Animal //syntax 1 for making base class virtual
{
    public:
    int numlegs;
    Mammal(int n,string b):Animal(b)
    {
        numlegs=n;
    }
};

class Birds:virtual public Animal  //syntax 2 for making base class virtual
{
    public:
    int nwings;
    Birds(int n, string b):Animal(b)
    {
        nwings=n;
    }
};
class warmblooded:public Birds,public  Mammal
{
    public:
    int count;
    warmblooded(int n ,int m,string b,int c):Birds(n,b),Mammal(m,b),Animal(b) //looking at this we can say that animal becomes an 
                                                                            // indirect base class of warmblooded.
    {
        count=n;
    }
};

int main()
{
    warmblooded w(2,4,"breed",10);
    return 0;
}