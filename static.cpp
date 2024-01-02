// // You are tasked with creating a class to manage a messaging system. 
// Implement a Message class with the following attributes: messageContent (string) and 
// messageCount (static integer). Each time a new message is created, 
// the messageCount should be incremented.

// // Additionally, implement a method named displayMessageInfo that 
// prints the content of a message along with the total number of messages created.

// // Write a C++ program that creates multiple instances of the Message class,
//  initializes their message content, and then calls the displayMessageInfo method for each message.
//   Ensure that the messageCount reflects the total number of messages created.

// // Please provide the C++ code to implement this scenario.

#include<bits/stdc++.h>
using namespace std;
class Message{
    public:
    string messagecontent;
    static int messagecount;

    Message(string messagecontent)
    {
        this->messagecontent=messagecontent;
        messagecount++;

    }
    void displayMessageInfo()
    {
        cout<<"contents are "<<messagecontent<<endl;
        cout<<"count is"<<messagecount<<endl;
    }
};
int Message::messagecount=0;
int main()
{
    Message m1("simran"),m2("you can"),m3("do it");
    m1.displayMessageInfo();
    m2.displayMessageInfo();
    m3.displayMessageInfo();
    return 0;
}