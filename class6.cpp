/* TOPIC IS  MEMBER INITIALIZATION WITHIN THE CONSTRUCTOR :-

lets suppose class example 

class Rectangle {
    int height;
    int width ;
    public : 
    Rectangle (int int) ;
    int area () { return height * width ;  }
    };


-  when the constructor is used to  initialize other members like fundamental types or compund or classess types 
it is done by adding semicolon to the class body and list of intializations 
- it is not important for fundamental type as whatever the way syntax used dont varry any result 
but  the members like class is definately matters the ayntax since its easy to resorting to statements in the body here. 
it means no need to use = sign to assign the values to the data members of the class type 

down below understand in detail 


there are 3 types of syntax to define the members in the constructor 


1.  Rectangle :: Rectangle (int x , int y)  { height = x ; width = y ; }   ---- This is the normal way learnt till now 

2. Rectangle :: Rectangle (int x, int y ) : height (x) { width = y ;}   or   
                                                                               -- this synatx used member initialization form that is using semicollon and curly braces empty as 
                                                                               -- resorting the = sign and separate assigining values directly under the parenthesis using functional form 
   Rectangle :: Rectangle (int x, int y ) : height (x) ,  width (y) { }
                                                                               -- same but different syntax.
   Rectangle :: Rectangle (int x, int y) : height {x} , width {y}  { }        -- this is also same with uniform member intiialization format  using the curly bracket instead of parenthesis 



*/

// member initialization example 

#include <iostream>
using namespace std;

class Circle {
 double radius ;

 public : 
 Circle (double r) : radius {r} { }  // constructor declaration and defination using uniform member initialization

 int area () { return radius * radius * 3.14159125 ; } // inline member function 
};

// diffrent class 

class Cylinder {

    // by default data members are private 

    Circle base ;  // data member of type class Circle 
    double height ;  // data member of fundamental data type 
 
 public : 
    Cylinder (double r, double h) : base {r} , height {h} { }  // notice the member base is denoted to assign the variable r with the double as r should be double 
                                                                 // as the same data member as r in circle class and base is r in cylinder class 

    double volume () { return   base.area() * height ; }   // calling the baase member w.r.t  circle area member since base is type of circle class

};

int main () {
    Cylinder cyl {20.54,30.25} ; // uniform initialization for the declaration of the constructor 
    cout<<" volume of the cylinder:  " << cyl.volume() <<endl;
    return 0 ; 
}


/* note - this is the example of constructor calling constructor -- meaning the constructor of the cylinder will call the constructor of the circle 
why ? - because Class Cylinder has the data member of type class Circle and to get the area function it passes the through the constructor of radius r for the assigned value of r via constructor.


so cylinder sonstructor calls the base constructor the only way to do this is member initialization list.


*/