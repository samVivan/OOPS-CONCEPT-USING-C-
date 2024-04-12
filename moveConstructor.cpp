/* Move Constructor -  similaar to copy constructor but instead of performing the copy it moves the content of  
the object from source to destination and keeping the same memory address when move constructor is defined 
implicitely for not giving any command to change the memory address. 
it means yes the memory address can be specified by the user to where to move the content of the object */

/* when move cosntructor is used specially  needed or condition to perform this ?
The best condition for using the  move constructors is  using  temporary objects like the return values of the
 function and thus such values or data should be used which is not recquired for further processing in the code */

/* Move Constructor and Move Assignments  usess r value refrrence of the type  of its class itself as parameter 
and this can be done using 2 Ampersand Symbol at once 
For Example  Myclass (Myclass && ) ;   // Move Constructors
             Myclass &operator = (Myclass &&)   // Move Assignment operators 
*/

// As a r value refrrence matches temporaries of this type

/* Myclass  fn() ;  //  function returning a my class object here  
    Myclass   foo ;  // default Constructor is being called and object was initialized using the constructor 
 Myclass bar = foo ;  // Copy Constructor is being called 
 Myclass  bazz = fn () ;  // Move constructor 
   foo = bar  ;  // copy Assinment operator 
 baz = myclass () ; // Move  Assignmet  */


// always remember the these all Constructors and Assignmets are mostly utilized to  manipulate the dynamically allocated objects especialy objects created with new and delete.

#include <iostream>
#include <string>

using namespace std ;

class moveConstructor {

string *ptr ;

public :

 moveConstructor (const string & str ) : ptr (new string (str) ) {}  //  customize constructor 


~moveConstructor () { delete ptr ;}    // destructor 

moveConstructor ( moveConstructor&&  X) :  ptr (X.ptr) { X.ptr = nullptr  ; } //   move cosntructor 

moveConstructor  &operator = (moveConstructor&& X) { 
delete ptr ;
ptr = X.ptr ;
X.ptr  = nullptr ;
return *this;
}

const string& content() const {  return *ptr  ; }  // get member function 

// additional operator Assignment 

moveConstructor operator + (const moveConstructor & rhs) const {  // cannot use &operator since & will give
//    danglling refrrence  becasue & here means function is returning  a refrrence to temprary object  
// as Temporary object will be destroyed at the end of the function call 
// by not adding & we ensure that new object is being created  and returned by a value
return moveConstructor ( content() + rhs.content () ) ; 

 }

};

int main () {
moveConstructor  object1 ("Exam")  ;
moveConstructor object2 ("ple") ;
object1 = object1 + object2  ;

cout<<"object 1 is being displayed here:->  " << object1.content() <<'\n' ;

return 0;
}


// down below move (object2) is creating an o

#include <iostream>
#include <string>

using namespace std;

class moveConstructor {
    string* ptr;

public:
    moveConstructor(const string& str) : ptr(new string(str)) {} // customize constructor

    ~moveConstructor() { delete ptr; } // destructor

    moveConstructor(moveConstructor&& X) : ptr(X.ptr) { X.ptr = nullptr; } // move constructor

    moveConstructor& operator=(moveConstructor&& X) {
        delete ptr;
        ptr = X.ptr;
        X.ptr = nullptr;
        return *this;
    }

    const string& content() const { return *ptr; } // get member function

    // additional operator Assignment

    moveConstructor operator+(moveConstructor&& rhs) const {
        // Creating a new object by moving the concatenated string
        return moveConstructor(content() + rhs.content());
    }
};

int main() {
    moveConstructor object1("Exam");
    moveConstructor object2("ple");
    object1 = object1 + move(object2); // Moving object2 into the operator+

    cout << "object 1 is being displayed here:->  " << object1.content() << '\n';

    return 0;
}


