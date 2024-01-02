// 3. Multilevel Inheritance:
// Question:
// Create a class Animal with attributes species and sound. Derive a class Mammal from Animal with an additional attribute numLegs.
//  Further, derive a class Dog from Mammal with an attribute breed. Implement methods to display information about each class.
#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
        string species,sound;
        Animal(string a,string b)
        {
            species=a;
            sound=b;
            cout<<species<<" "<<sound;
        }
};
class Mammal:public Animal
{
    public:
    int numlegs;
    Mammal(string ab,string b,int c): Animal(ab ,b)
    {
        numlegs=c;
        cout<<numlegs<<" ";
    }
};
class Dog:public Mammal
{
    public:
    string breed;
    Dog(string a,string b,int c, string d):Mammal(a,b,c)
    {
        breed=d;
        cout<<breed;
    }

};
int main()
{
    Dog("dog","bow bow",4,"pomerian");
    return 0;
}