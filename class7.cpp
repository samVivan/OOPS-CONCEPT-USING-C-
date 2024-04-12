/* Pointer to classes 
pointer can also used to point the objects. There are 4 pointes to remember here 
1. pointer should of be of same type as the object. Since we know oject is like variable so the pointer should be same type of the variable 
2. Arrow operator -> is used to derefrence the pointer object in the class . Altough we can use the *pointer normal derefrence pointer also.
3. offset operator Rectangle[] can also be used to define the object as an array of elements.
4. like x[0] will derrefrence the array pointer to the 1st location. and
      x [1] will direfrence to 2nd array 
      x[2] will dereffrence to 3rd and so on 

*/

// pointer to classes 

#include <iostream>
using namespace std ;

class Rectangle {
 int height ;
 int width ; 

 public : 

 Rectangle (int x, int y) : height {x}, width {y} {}  // direct uniform member initiaization using constructor 
 int area (void) {return height * width ; }   // member function inline 
};

int main () {
    Rectangle rect {3,4};
    Rectangle *recta, *rectb, *rectc;
    recta = &rect;   // here recta is pointer to rect  of type Rectangle
    rectb = new Rectangle{88,99};       // lets suppose the calling constructor be like Rectangle rectb {88,89} but when create a pointer and since its constructor,
                                        // the value is assigned in directly while creating an object thats why this syntax for creating a new pointer.

    rectc = new Rectangle[2]{{44,82} , {49,49}};  // here pointer is pointing to the Rectangle type array and has the new values 

    cout<<" rect area: "<<rect.area()<<endl;  //  the initial object area is being created as of type Rectangle

    cout<<"recta area: "<<recta->area() <<endl;    //  recta is a pointer to rect so the value is same the only difference is the direfrence operator as arrow operator 

    cout<<"rectb area: "<<rectb->area() <<endl;   // rectb is pointer to new object created with new values 

    cout<<"rectc area 1st: "<<rectc[0].area()<<endl;   // the 1st array location using off set operator  and the dot operator for accessing the member function 

    cout<<"rectc area 2nd : "<<rectc[1].area() <<endl;  //   the 2nd array location using off set operator and the sot operator for accesing the 2nd array location 

     
    delete recta;
    delete rectb;
    delete [] rectc;

    return 0; 




}

// note :- the line 42 and 44 rectc[0].area() and rectc[1].area() is not only assigning the values here but also performing the calculation and then storing the values.