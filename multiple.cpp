// 2. Multiple Inheritance:
// Question:
// Define three classes, Person, Employee, and Student. Person has attributes name and age. 
// Employee has attributes employeeID and salary. Student has attributes studentID and grade. 
// Create a class EmployeeStudent that inherits from both Employee and Student. 
// Implement methods to display the details of an employee and a student.
#include<bits/stdc++.h>
using namespace std;
class Person{
    protected:
        string name;
        int age;
    public:

};
class employee{
    protected:
        int empid;
        float sal;
    public:
        employee(int empid,float sal)
        {
            this->empid=empid;
            this->sal=sal;
        }
        void display()
        {
            cout<<empid<<" "<<sal<<endl;
        }
};
class student{
    protected:
        int stuid;
        char grade;
    public:
        student(int stuid,char grade)
        {
            this->stuid=stuid;
            this->grade=grade;
        }
        void disp()
        {
            cout<<stuid<<" "<<grade<<endl;
        }
        
};

class employeestudent:public employee,public student
{
    public:
    employeestudent(int empid,float sal,int stuid,char grade):employee(empid,sal),student(stuid,grade)
    {
        display();
        disp();
    }
};
int main()
{
    employeestudent(1001,239.8,101,'s');
    employeestudent(1004,299.90,105,'d');
       return 0;
}