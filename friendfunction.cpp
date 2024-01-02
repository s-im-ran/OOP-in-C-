// Practice Question: Modeling a Time System
// Create a Time class that represents a time in hours and minutes. Implement the following:
// Define a Time class with private members for hours and minutes.
// Implement a parameterized constructor that initializes the time with given hours and minutes.
// Implement a friend function called addTime that takes two Time objects as 
// parameters and returns a new Time object representing the sum of the times.
// Create a simple program to demonstrate the usage of the Time class, 
// including creating instances, setting values, displaying times, and adding two time values.

#include<bits/stdc++.h>
using namespace std;
class Time;


class Timeadd
{
    public:
    Time addtime(Time &obj1,Time &obj2);

};
class Time
{
    private:
        int hrs,mins;
    public:
     friend Time Timeadd :: addtime(Time &obj1,Time &obj2);
        Time()
        {}
        Time(int hrs,int mins)
        {
            this->hrs=hrs;
            this->mins=mins;
        }
        void disptime()
        {   
            // if(mins>60 || mins==60)
            // {
            //     mins=mins%60;
            //     hrs=hrs+mins/60;
            // }
            cout<<"The current time is"<<hrs<<" + "<<mins;
        }
   

};
Time Timeadd::addtime(Time &obj1,Time &obj2)
{
    Time obj3;
    obj3.hrs=obj1.hrs+obj2.hrs;
    obj3.mins=obj1.mins+obj2.mins;
    if(obj3.mins>60 || obj3.mins==60)
            {   int n=obj3.mins;
                obj3.mins=obj3.mins%60;
                obj3.hrs=obj3.hrs+n/60;
            }
    if(obj3.hrs>24 || obj3.hrs==24)
    {
        obj3.hrs=obj3.hrs%24;
        // obj3.hrs=obj3.hrs/24;
        // obj3.hrs=obj3.hrs+n;
    }
    return obj3;

  
  

    return obj3;
}
int main()
{
    
    Time t1(15,30);
    Time t2(48,30);
    Timeadd t3;
    t3.addtime(t1,t2).disptime();
    return 0;
}