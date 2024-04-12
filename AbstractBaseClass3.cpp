/* Dynamic memory Allocation in the Polymorphic classes
here we will use the constuctor in all the classes  */


#include <iostream>
using namespace std ;

class Polygon {
protected :

int height ;
int width ;

public: 
Polygon (int a , int b ) : width (a) , height (b) {} // constructor so no need of SetVal member function 
virtual int area(void) = 0 ;
void print_area() { cout<<this->area() <<endl; } // using of the this pointer for the print member
                                      // functoin in the abstract Class
};

class Rectangle : public Polygon {
public : 
// we have to do the invoking of the constructor using member initializatio method
Rectangle(int a, int b) : Polygon(a,b) {}
int area(void) { return width * height ;} 

};

class Triangle : public Polygon  {
public:

// here also its calling the polygon constructor 
Triangle (int a, int b ) : Polygon (a,b) {}  // invoked sonstructor to ba called first 

int area (void) { return (width *height)/2 ; }
};

int main () {
// directly creating the pointer first and allocating the new objects 

Polygon *ppoly1 = new Rectangle (34,443) ;  // dynamically created objects 
Polygon *ppoly2 = new Triangle (644, 777) ;   // dynamically created 2nd object

// there are other ways also to create object dynamically 

/* note down here the area function is not being called seperately its been redirected through
the print function whhich is using this pointer to get the area */
 
ppoly1->print_area();    // directly using the printarea function since we constructors 
ppoly2->print_area() ;  
 
delete ppoly1;
delete ppoly2 ;

return 0;
}
