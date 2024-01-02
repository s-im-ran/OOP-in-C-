// You are tasked with creating a program to manage information about students
//  in a school. Define a structure named Student with the following attributes: 
//  rollNumber (integer), name (string), grade (char), and marks (float).
// Create an array of five Student structures and write a program that does the following:
// Initializes the information for each student.

// Calculates the average marks of all students.
// Prints the details of the student with the highest marks.
// Please provide the C++ code to implement this program.

#include <bits/stdc++.h>
using namespace std;
typedef struct student
{
   int rollno;
  string name;
   char  grade;
   float marks;

}stu;
int main()
{
    stu s[5];
    float sum=0;
    float avg;
    float max=0;
    int info;
    for(int i=0;i<5;i++)
    {
        cout<<"enter the name,ROLLNO, marks and grade of the student";
        cin>>s[i].name>>s[i].rollno>>s[i].marks>>s[i].grade;
        sum=s[i].marks+sum;
        if(s[i].marks>max)
           { info=i;
           max=s[i].marks;
           }
    }
    avg=sum/5;
    cout<<"the avg maks of all students"<<avg;
    cout<<"the details  of all students wiht highest marks is "<<s[info].rollno<<" "<<s[info].name<<" "<<s[info].grade<<" "<<s[info].marks<<" ";

    return 0;

}