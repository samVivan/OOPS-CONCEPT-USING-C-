#include <iostream>
using namespace std;

class sample {
string data ;
public: 
sample (const string& str ): data (str) {}   // parameterized constructor 
sample () : data () {}   // default constructor 
const string& Content  () const {return data ;} //const data members can access const member function 
};

int main () {
sample obj1;  // obj created with default constructor and still its initialized 
sample obj2 ("hello dear") ; //obj created with parameterize constructor
cout<<"object 2nd content "<<obj2.Content()<<endl;
return 0;
}
