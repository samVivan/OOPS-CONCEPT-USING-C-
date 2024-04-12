/* In this Section we will consider all the types of inheritance in OOPS concept 

1. Single inheritance -> The derived class Inherits from only 1 base class 

for example ;

class Base {
public :
int x;
};

class Derived : public Base { };


2. Multiple Inheritance -> The Derived class Inherits from multiple base classess
    if 2 or more base classess have a member with same name then the Derived Class
Must explicitly specify which base class member its using 

for example 


class Base1 {
public: 
int x;
};

class Base2{
public:
int y;
};
class Derived : public Base1 , public Base2 { };


3.Multilevel Inheritance -> The derived class inherit from another derived classess
means one sngle class A is the base class and class B is derived class and when 
class C is made derived class of inheriting the members of the class B 
in level order is called multilevel inheritance 

for example

class Base {
public:
int x;
};
class Derived1 : public Base { };

class Derived2 : public Derived1 { };

class Derived3 : public Derived2 { };



3. Hierachial Inheritance -> The Multiple Derived classes Inherits form the single
  Base class

for example 

class Base {
public:
int x;
};

class Derived1 : public Base { };

class Derived2 : public Base { };

class Derived3 : public Base  { } ;

class Derived4 : public Base { } ;


5. Hybrid  Inheritance -> The  is a type of inheritance that combines multiple types of inheritance 
  a derived class could inherit from  multiple base classes and then also inherit
 from  another derived classess.

for examample 

class Base1 {
public: 
int x;
};

class Base2 : public Base1 {
public:
int y ;
};
class Base2 : public Base1 {
public: 
int y ;
};

class Derived : public Base1 , public Base2 { };


class Derived : public Base{};
*/


// this is the example of the multiple inheritance class  which means derived classes inherits from 2 or more base classses 


#include <iostream>
using namespace std ;


// this is the 1st class as the base class here 
  
class Cpolygon {  
  protected:
  int height ;
  int width ;

  public:
  void setVal (int a, int b )  { width = a ; height = b ;}
};

// The is the 2nd base class 

class Coutput {    
  public :
  void getOut (int i ) ;   // this is the member function declaration inside the class body 
};

void Coutput :: getOut(int i ) {cout<<i<<endl; }  //this is the member fucntion defined outside the class body 


// The is the relatioship for the derived class inheriting from the base class I mean multiple  base classes 



class CRectangle : public Cpolygon , public Coutput {
  public:
  int area () { return width * height ;}
};

 // this is the relationship of the derived classess inherits form the base classes multiple base classes 


class CTraingle : public Cpolygon , public Coutput {
  public :
  int area () {return width * height /2 ; }
};


int main () {

  CRectangle object1;  //  object declaration by default constructors

  CTraingle object2 ; // object declaration by default constructors

  
  object1.setVal (12,343) ;  // setting the values for the object using the set vlaues function 
  object2.setVal (23, 43) ;  // setting the vales for the object2  the setvalues function 

  object1.getOut (object1.area());  // using the function under function method using the dot operator 
  object2.getOut( object2.area()) ;

  return 0;

}



