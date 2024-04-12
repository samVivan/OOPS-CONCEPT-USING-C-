/* The friend  keyword is used to provide access to the private and protected data
members of the class  for non -memberfunction of the class 

which means that non -member function can access the private and protected 
data members of the class using just the keyword "friend"  with one condition 
the condition is that the friend  keyword must be used while declaring the 
memeber function inside the class  */

//  so first we will look into friend function 
// before class we wiil see how the friend function works when declared inside the class what is  happening 

#include <iostream>

using namespace std ;

class  Rectangle {
private :
int width ;
int height ;

public :
Rectangle (int x, int y) : width (x), height (y) {}

Rectangle () = default;  // default constructor  or Rectangle () {}

int area () { return width * height ; }

friend Rectangle Duplicate (const Rectangle&) ;  /* Duplicate is a function using
 friend keyword as this is going to become the non member function but can access the
 private data members  */

};   //class  body closed 

Rectangle Duplicate (const Rectangle&  arg ) {   /* Duplicate member function  which is friend function is being defined outside the class and accessed
                                 as member function outside the class */
Rectangle  preresult ;

preresult.width = arg.width * 2 ;

preresult.height = arg.height * 2 ;

return  preresult;
}



int main () {
Rectangle object1 ;  // object declaration and defination  on default constructor 

Rectangle object2 (3,5) ;

object1 = Duplicate  (object2) ;

cout << "object 1 area is going to be displayed :-> "<<object1.area()<<'\n';

return 0 ;
}

 


