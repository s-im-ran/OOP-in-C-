// Pointer Manipulation with Base and Derived Classes:
// Consider a scenario where you have a base class called Shape representing geometric shapes.
//  The Shape class has two data members: width and height. 
// Additionally, there is a derived class called Rectangle that inherits from the Shape class.

// Your task is to write a C++ program that does the following:

// Create a Rectangle object dynamically using a pointer to the base class (Shape).
// Use the pointer to invoke the area() function and display the area of the rectangle.
// Write the code for the main function that demonstrates this scenario.
#include<bits/stdc++.h>
using namespace std;

class shape
{
    public:
    int width,height;
    virtual void area(int a,int b)=0; //a class with atleast one pure virtual function is called abstract class
                                      //an object of abstract class cannot be created.
};

class Rectangle:public shape
{
    public:
    void area(int a,int b)
    {
        width=a;
        height=b;
        cout<<width*height;
    }
};


    int main()
{

    
    shape *ptr=new Rectangle;
    ptr->area(4,5);
    return 0;
}

