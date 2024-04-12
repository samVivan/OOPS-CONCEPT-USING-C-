/* Polymorphism means original content but diffrent type of displays 

1. polymorphism is the property of inheritance  only 
2. The pointers to the derived classes and the pointer to the base classes is
   type Compatible each other .
3. polymorphism is the art of taking the advantages of type compatibility 
      feature of pointer of the derived and the base classes.

*/

//example of the type compatibility of the pointers of derived classes 
// base classes 

#include <iostream>
using namespace std ;

class Cpolygon {
   protected :
   int height ;
   int width ;

   public :

   void SetVal (int a, int b) {width = a ; height = b; }
   
};

class Crectangle : public Cpolygon {
   public :
   int area () {return width * height ; } 
};

class Ctraingle : public Cpolygon {
   public :
   int area ( ) {return width * height / 2 ; } 

};

int main () {
   Crectangle object1;
   Ctraingle object2 ;
   Cpolygon *ppoly1 = &object1;
   Cpolygon *ppoly2 =  &object2 ;

// yeha pointer sirf value set karne me kam aya means use of setval member function 


   ppoly1 -> SetVal(10,23) ;
   ppoly2 -> SetVal(222,2929) ;
   cout<<object1.area() <<endl;  // here directly ppoly->area() cannot be written 
   cout<< object2.area() <<endl;   // same here 
   return 0 ;
   
}



/* Here Polymorphism is the use of same member for differrent purpose in the
same code and this is possible for pointer to the derived class is type compatible 
to the base class and the same pointer should also seting the values sepaarately 
for each object that is the polymorphism 

but it should be done in area also as I have mentiond in the comments 
there is a problem since the area function is defined in the derived classess
only, so even if we use pointer for area fun then for rectnagle and Traingle class
the area will result the same area() .BUt both the traingle and rectagle area
is diffrent as per requirement and so we cannnot achieve Polymorphism in this Case


so to use the polmorphism in better way so that I can use it every where 
especiialy in the area function we need two things 

1. the member function must be declared in the base class so that it can 
   be redifined in the derived class 

2. the redefining of member function in the derived class from the base class
   is only possible if use the virtual function by using the keyword Virtual.
   
*/