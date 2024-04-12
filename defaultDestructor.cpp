#include <iostream>
using namespace std;

class Sample {
string *ptr ;
public: 
Sample () : ptr (new string) {}
Sample (const string & str) : ptr(new string (str)){}

~Sample  () { delete ptr ;} // destructor
const string& Content() const {return * ptr ; }
};
int main () {
Sample obj1 ;
Sample obj2 (" Hello Dear ") ;
cout <<"object 2 content "<<obj2.Content() <<'\n' ;
return 0 ;
}


