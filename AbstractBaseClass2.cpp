/* In Abstract class we can use this pointer also which refer itself  to the member function 
being excuted at that time 
*/

#include <iostream>

using namespace std ;

class Polygon {

protected :
int height ;
int width ;

public: 
void SetVal (int a, int b) { width = a ; height = b ; } 

virtual int area (void) = 0;

void print_area() { cout<<this->area()<<endl ; }  // here this pointer is used in the Abstract base class

};

class Rectangle : public Polygon  {

public:

int area(void) { return width * height ; }
};

class Triangle : public Polygon {

public:

int area (void) {return( width * height )/2 ; }

};

int main () {

Rectangle object1;
Triangle object2;

Polygon *ppoly1 = &object1;
Polygon *ppoly2 = &object2;

ppoly1->SetVal(32,32) ;
ppoly2->SetVal (444,3232) ;

ppoly1->print_area()  ;  // here directly the print area function used 
ppoly2->print_area()  ;

return 0 ;

}
