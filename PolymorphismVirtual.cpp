/* Polymorphism using the  virtual function  and creating Polymorphic dervied classes

Polymorphism - the feature of type compatibility of pointer  that means same pointer
will point to  derived class and the base class 


Virtual  Members :-> This is the member function declared in the  base class so that
this member function can be redefined in the derived class 

itna sab is liye cause 
we can use the type compatability feature more broadly that means use polymorphism 
more broadly 

Now as I already told that there  we can use the virtual member function by using the keyword Virtual in the Base Class 

*/
#include <iostream>
using namespace std;

class Polygon {
    protected :
    int width ;
    int height ;

 public: 
void SetVal(int a , int b)  { width = a ;  height = b; }

 virtual int area() {return 0 ; }  // defining the virtual funciton in the base class 
};

class Rectangle : public Polygon {
    public:
    int area() {return width * height ; }  // since this is virtual function can be redefiened in the derived classes 
};

class Traingle : public Polygon  {
    public:
    int area () {return (width * height)/2 ;}
};

int main () {
    Rectangle object1;
    Traingle object2;
    Polygon object3;

    Polygon *ppoly1 = & object1;
    Polygon *ppoly2 = & object2;
    Polygon *ppoly3 = &object3;
    
    ppoly1->SetVal(4,4) ;

    ppoly2->SetVal(88,99) ;

    ppoly3->SetVal(20,40) ;

//here we use the polymorphic property of the pointer to use the same pointer for diffrent purpose 
// possible due to use of virtual function 

    cout<<"pointer area of Rectangle -- " <<ppoly1->area()<<'\n';
    cout<<"pointer showing area of Traingle -- "<<ppoly2->area()<<'\n';
    cout<<"pointer showing the area of polygon --"<<ppoly3->area()<<endl;

    return 0 ;
}

/*   output 

pointer area of Rectangle -- 16
pointer showing area of Traingle -- 4356
pointer showing the area of polygon --0
*/

/*Note :- 
The virtual keword allows a member of the derived class of the same name as one in the 
base class to be appropriately called by the single pointer 

for testing the above line if we remove the virtual keyword from the code 
then after running the code will provide output as 0 for all the 3 areas 
since the pointer will point only the area function inside the Polygon Class 

more precisely 
when a type pointer is pointing to the base class and is also pointing to an object of the 
derived class 

*/

/* vvip 
Polymorphic Class :-  A class that inherits a virtual function is called the Polymorphic class 

in the above code Rectangle and Traingle class is the Polymorphic class
 as it inherits the virtual member functions

*/


// vvip note :- pointer used when a base member is inherited in the derived class