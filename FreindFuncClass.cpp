/* Friend Class means actually  the class can access the private data members of 
another class  using the declaration of class with the keyword friend inside another class  */
  
//undersrstand which is the class who is friend to which class and how will you mark the statements
                                      


// 1. here we will use Rectangle or polygon  is a friend of  class Square 
// note :- Rectangle is a friend of Square  and Square is not friend of Rectangle 
// friend of class A is  CLASS B  and class C is friend of  class B  that doesnt means class A is friend to class C no prolonged friendship 



#include <iostream>
using namespace std ;

class Square ;  // square class declaration in advance is needed 

class Rectangle { 
private :
 
int width ;    // note these are private data member
int height ;

public :  
//here the default Constructor will be used 

int area () {return width * height ; }

void Convert (Square a ) ;  // member function declaration  is must to use friend class a is the parameter 
// which is type of Square 
};

class Square {
friend class Rectangle ;  // here Rectangle class is friend of square class

private :
int side ;

public: 
Square (int a) : side (a) {}   // here the paramter will be same as used in the convert function of Square a
};

void Rectangle :: Convert (Square a) {   // here the function is void as the function won't return anything 
// this function is there to make the height and width to just a  side 
    width = a.side ;
    height = a.side ;
}

int main () {
Rectangle object1 ;
Square object2 (4) ;
object1.Convert(object2) ;  // The object2 parameter is converted as to object1 
cout<<"object 1 that is the data of converted square a area will be diplayed :-> " <<object1.area()<<'\n' ;
return 0 ;
}



