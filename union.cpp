// Certainly! Here's a simple union question to practice:

// **Question:**
// You are designing a program to represent a person's contact information. 
// Define a union named `ContactInfo` that can represent either a phone number (as a string)
//  or an email address (as a string).

// Create a structure named `Person` with the following attributes: `name`
// (string) and `contact` (an instance of the `ContactInfo` union).

// Write a program that creates an instance of the `Person` structure, 
// initializes its attributes, and then prints the contact information. 
// Additionally, include a member function within the `Person` 
//  that prints the contact information.

#include<bits/stdc++.h>
using namespace std;
typedef union ContactInfo
{
    string phonenumber;
    string email;
}con;
typedef struct person
{
    string name;
    con contact;
    
    void input(string n,con ct)
    {
        name=n;
        contact.phonenumber=
    }
}p;
int main()
{  
    return 0;
}