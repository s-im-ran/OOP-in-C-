//private destructor is necessary when we dont want to delete the object fo the class
//if a pointer to a object points to a fucntion that deletes the object ,it dangles so we have private destructor
//so in order to delete a object using a private destructor we have to pass the class pointer to a friend function and use delete
//we cannot simply delete the dynamically created object. 
#include<bits/stdc++.h>
using namespace std;
class test
{
    private:
    ~test()
    {
        cout<<"private destructor called"<<endl;
    }
    friend void destructtest(test *tptr);
};
void destructtest(test *tptr)
{
    delete tptr;
}
int main()
{
    test *tptr=new test;

  
    //delete tptr;           //this fails 
    destructtest(tptr);        
    return 0;
}