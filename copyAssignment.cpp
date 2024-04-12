//Copy Assignment  - basically works on the operator here 
/* why we are studing this ?
1.  since the object is not just copied on construction its also being copied on assignment operaration 
2. prevent memory leaks as implicit copy construcion performs shallow copy and thus while deleteing the  original 
content isn't possible as both the original and the pointed object both will be pointing the same address and there
 for deleting the copied poiunter twice and its imposible to delete the pointers before the assignment operator 
3.  leak can be solved as customized copy assignment performs deep copy stating  copying the address and the content
 both */

/* what is actually the copy assignment and when it is recquired ?
1. the copy assignment is the  overloading of operator to perform specail tasks.
2. copy assignment is the special member function 
3. no declaration of object can  perfom copy assignment tasks as because all the  objects should be pre declared 
examples are 
 myclass foo;        // this is object initialization copy constructor is called 
myclass  baz = foo; //   object is already initialized here the copy constructor is being callled  although 
                	it may look like the copy assignment but its the way for uniform initializations of  data members using
			one parameter 
baz = foo ; 	    // this is the copy assignment with the help of the assignment operator 

*/

/* what is Copy Assignment operator ? 
1. The Copy Assignment operator is an overloading of operator (=) which takes the parameter as the refrence 
 of the class itself 
2. return value is refrence to *this pointer which means  objects is being passed as the parameter with the 
refrence to its own type and member function of which being executed.

example of Copy Assignment Operator 
Myclass & operator = (const Myclass & );   */

/* when is the Copy Assignment operator is being defined ?
1. no copy Assignment 
2. no custom assignment 
3. no move asignment 
4. nor move constructor.
*/


/* performing deep copy and deleting the previous objects example */

#include <iostream>
#include <string>

using namespace std;

class CopyAssignment {
string *ptr ;

public : 
CopyAssignment (const string& str ) : ptr (new string (str)) {}

CopyAssignment(const CopyAssignment&  X) : ptr (new   string  (X.content())) {}

const string& content () const { return *ptr ; }



CopyAssignment &operator = (const  CopyAssignment& X ) {   // using this there is no need of creating copy constructor seperately 

delete ptr ;  // free the old memory
ptr = new string (X.content()) ;  // allocating to new string and copying 
return *this ;
// here it can be also written in short 

// *ptr = X.content () 
// return *this         
  }
  ~CopyAssignment() { delete ptr; }  // destructor 
};




int main () {
CopyAssignment obj1 ("I am being copied ") ;

CopyAssignment obj2 = obj1 ;  // this line means Copy Assignment 
                               // which creates the new objects and initialize the created objets 
                                // with the declared objects with the help of the copyconstructor 

obj2 = obj1 ;   // copy assignment operator used here 

cout<<" 2nd object content is being displayed" <<obj2.content()<<'\n' ;

return 0;
}

 

