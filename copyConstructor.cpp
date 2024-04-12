//copy constructor - when an  object is named object of its own type  as argument its copy constructor is invoked to construct a copy 
// meaning  the copy constructor is invoked when  the object is some class ,struct, any data type and is passing the argument as the type of  itself.
// normaly the 1st parameter is the type refrence of  the  class itself or the data type itself 
// for example myclass :: myclass (Const Myclass & argument) ;  this  is the copy constructor 
/*whe the class dont have these initialy then the copy constructor is implicitely created we can say as default copy constructor 
1. No custom copy constructor 
2. No move constructor 
3. No move assignment     */
// NOTE :- The implicit copy constructor performs the shallow  copy  (shallow copy means just copy the pointing addrress not the original content of the data )
// NOTE :- The custom copy constructor performs a deep copy (Deep Copy  means both the data and the pointing addrress is copied)
 

// This is the example of the customized copy constructor which whill performs the deep copy 

#include<iostream>
#include <string>
using namespace std;

class Deepcpy {
    string *ptr;

    public:

    Deepcpy(const string& str): ptr(new string (str)) {}  // constructor normal

    ~Deepcpy () { delete ptr ; }   // destructor 

    Deepcpy(const Deepcpy& X) : ptr (new string (X.content())) {} // customized copy constructor performing deep copy

    const string& content () const {return *ptr; }  // member function created to be accesed for deep copy

};
int main () {
    Deepcpy obj1 ("I am being copied ") ;
    Deepcpy obj2  = obj1 ; // this is the use of copy assignment here but discussed in copyAssinment section 

    cout<<"object 2 content is being displayed" << obj2.content()<<'\n';

    return 0;
}






