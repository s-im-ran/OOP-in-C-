//static functions are functions that can access only the static data members
//invoke a static member using vlass name and scope resolution operator is advisable 

// Question:
// You are working on a class to represent a mathematical operation.
//  Implement a MathOperation class with a static function named multiply.
//   This function should take two integer parameters, multiply them, and return the result.

// Additionally, implement a non-static method named displayResult that
//  takes an integer parameter and prints it along with a message indicating
//   that it is the result of the multiplication operation.

// Write a C++ program that demonstrates the use of the static 
// multiply function and the displayResult method. Create instances of the MathOperation class, 
// use the static function to perform multiplication, and then call the displayResult method 
// to print the result.

// Please provide the C++ code to implement this scenario.

#include<bits/stdc++.h>
using namespace std;
class MathOperation
{
    public:
    static int a,b;
   
    static int multiply()
    {   cout<<"enter the value of a and b";
        cin>>a>>b;
        int result=a*b;
        return result;
    }
    void displayresult()
    {
        int result=multiply();
        cout<<"this is the result of multiplication"<<result<<endl;
    }
};
int MathOperation::a=0;
int MathOperation::b=0;

int main()
{
    MathOperation m1,m2,m3;
    m1.displayresult();
    m2.displayresult();
    m3.displayresult();
    return 0;
}