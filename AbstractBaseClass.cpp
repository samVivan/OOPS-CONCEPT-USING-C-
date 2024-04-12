/* Abstract  base classess can only be used as base clasess as the name suggests 

Abstract Base Class- when the virtual function is used without defining the virtual
function in the base  class but just declaring  virtual function to zero (0) 
- this virtual function when assigined to zero (0)  is called pure virtual function 

Abstract Base Class - when there is the use of pure virtual function in the base class
is called the abstract base class 

Note :- There can be multiple virtual function in the base clasess  but a class 
which contain atleast one virtual function is called Abstract Base classes

Now the Question arises that why need of Abstract Base Classes 

1. Abstract base Classes cannot be intantiated  directly 
 meaning its object cannot be created directly 
2. To create the object directly 
  concrete Class need to be created  that inherits the members from the abstract classes 
  and implement all the abstract methoods
3. making pure virtual function will reduce the effort for defining the virtual function in 
 the base class so that can be used in the derived class with the maximum usage 

 like creating the minimum creteria for the member function and so that we can use maximum in
 the derived classes 

 Note:- we cannnot create objects directly for the base classes but we can create pointers 
 to the abstract base classes.

 so one more condition when there is pure virtual function we cannot directly create objects
 of that base class since it will become the abstract classes 

*/

#include<iostream>
using namespace std ;

class Polygon {
  protected:
  int width ;
  int height ;

  public : 
  void SetVal (int a, int b) { width = a;  height = b; }
  virtual int area (void) = 0;   // this is the pure virtual function 
                                  // area function is considering the parameter as void means empty 

};

class Rectangle : public Polygon {
  public:
  int area (void) { return width * height ; }
};

class Traingle : public Polygon {
  public :
  int area (void)  { return (width * height)/2 ; }  // redefining the pure virtual function 
};

int main () {
  Rectangle object1;
  Traingle object2 ;
  // Polygon object3 ;  this is not possible to directly create the object of the base class 

  Polygon *ppoly1 = &object1 ;
  Polygon *ppoly2 = &object2 ;
  // Polyon  *ppoly3 = &object3 ; no pointer can be created on no created object

  ppoly1->SetVal(44,88) ;
  ppoly2->SetVal (33,230);
  // ppoly3->SetVal (432,3324);

  cout<<" Rectangles area displayed :- " <<ppoly1->area()<<'\n' ;
  cout <<"Traingle area displayed :- " <<ppoly2->area() <<'\n' ;
  // cout<<"polygon itself area displyaed :- " <<ppoly3->area()<<'\n' ;

  return 0 ;

}

//  output 

//  Rectangles area displayed :- 3872
// Traingle area displayed :- 3795



