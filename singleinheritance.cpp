// 1. Single Inheritance:
// Question:
// Design a class Vehicle with attributes brand and year, and a method displayInfo to print the details.
//  Create a derived class Car that inherits from Vehicle and adds an attribute numDoors.
//   Implement a method in Car to display the car's information, including the number of doors.

#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
    protected:
        string brand;
        int year;
    public:
        Vehicle(string brand,int year)
        {
            this->brand=brand;
            this->year=year;
        }
        void displayinfo()
        {
            cout<<"the name of the brand is "<<brand<<" and the year is "<<year<<endl;
        }
};

class Car:public Vehicle
{
    public:
        int numdoors;
        Car(string brand,int year,int numdoors):Vehicle(brand,year)
        {
            this->numdoors=numdoors;
        }
        void disp()
        {
            displayinfo();
            cout<<"the number of doors is "<<numdoors<<endl;
        }

};
int main()
{

    Car c("suzuki",2003,4);
    c.disp();
    return 0;
}