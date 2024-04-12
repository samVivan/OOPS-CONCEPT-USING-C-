/* 
Destructor - it has same functionality as constructor but in opposite directions 
           - The destructor has no arguments nor any return value same as constructors
           - The destructor task is to remove the constructor after the program cycle ends 
           - the (~) class_name () { delete ptr; }  is the syntax for destructor 
           - will have same name as the class name 


*/

#include <iostream>
using namespace std ;

class Data {
    string *ptr ;
    public :
    Data () : ptr (new string) {}  // default constructor 
    Data (const string& str ) : ptr (new string (str)){}  // paramterized constructor


    //  destructor  is called with the basic syntax
    ~ Data () { delete ptr ; }

    const string & content() const {
        return *ptr ;
    }
};

int main () {
    Data obj ;
    Data obj1 {"DETAILS"};     // 
    cout<<obj1.content()<<endl;
    return 0 ;
}