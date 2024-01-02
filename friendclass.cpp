// Practice Question: Modeling a School System
// You are tasked with designing a system to manage student information in a school. 
//Create two classes: Student and Teacher. The Student class should store information about a student, 
//such as the student's name, roll number, and marks. The Teacher class should have the ability
// to view and update the student's marks.

// Define the Student class with private members for the student's name,
// roll number, and marks. Implement a constructor to initialize these values.

// Declare the Teacher class as a friend of the Student class.

// Define the Teacher class with a function viewStudentDetails that
// takes a Student object as a parameter and displays the student's information.

// Implement another function in the Teacher class called updateMarks 
//that takes a Student object and a new marks value as parameters and updates the student's marks.

// Your task is to create these classes and demonstrate their usage
// in a simple program. Create instances of the Student and Teacher classes,
// set initial values, display student details, and update the student's marks.

#include <iostream>
#include <string.h>
using namespace std;
class student
{
    friend class teacher;
 private:
        string name;
        int rno;
        int m1,m2,m3;
 public:
       student()
       {}
       student(string v1,int v2,int v3,int v4,int v5)
       {
        name=v1;
        rno=v2;
        m1=v3;
        m2=v4;
        m3=v5;
        }
};

class teacher
{
    public:
    void viewstudentdetails(student &obj1)
    {
        cout<<"the name of the student is "<<obj1.name<<endl;
        cout<<"the rollno of the student is "<<obj1.rno<<endl;
        cout<<"the marks of the student in PCB respectively are "<<obj1.m1<<" "<<obj1.m2<<" "<<obj1.m3<<endl;
        
    }
    void updatemarks(student &obj1)
    {
        cout<<"updating the marks of the student with rollno "<<obj1.rno<<endl;
        //assuming the error was such that each subject marks has to be incremented by 5
        obj1.m1=obj1.m1+5;
        obj1.m2=obj1.m2+5;
        obj1.m3=obj1.m3+5;
       
    }
};

int main()
{   student s;
    student s1("simran",10,90,90,88);
    teacher t1;
    t1.viewstudentdetails(s1);
    t1.updatemarks(s1);
    t1.viewstudentdetails(s1); //to check whether the updation is successful or not 
    return 0;
}