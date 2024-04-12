/* Inheritance is the property to inherit  data members which are accessible to be 
inherited from the base class to the derived class 

there are few points to remember about the access specifers generally in the oops 
1. private :->  the data members can be accessed from friend class and its own class 
2. protected members:-> the members are accessible from the friend class, derived
                        class and its own class
3. public :-> these members are accessible from anywhere

NOTE:-> The inheritance Relationship is declared always in  derived class 

syntax :-> derived className : accessSpecifier base className  {  //body };

now the meaning of accessspecifer used here

remember :-> private members are not accessible from the derived class
 
1. if private - (syntax)---- derived className : private BaseClassName { // bofdy } ;

  both public and protected members becomes private in the  derived class 
  and private members are not accessible 

2. if protected :-> (syntax)---- derived className : protected BaseclassName {// body };

  both the public and protected members of the base class becomes protected in 
the derived class  

3. if public :-> (syntax) derived className : public  BaseClassName  { //body };
    here there is a change 
     public members of the base class will remian public in the derived class
    protected members becomes protected in the derived class 
  thats it this is rule 

lets suppose I have a base class and consist 3 data members 
1. private data members 
2. protected data memebers 
3. public Data members 

now if I want to inherit the data members like 
a.) .derived className : private Base ClassName {}; 
b.) derived className : protected Base ClassName {} ; 
c.) derived className : public Base ClassName {}; 
now if i do this what will be the access level of the 1 ,2, 3 of the base class in each a,b,c inheritance explain separately each case in detail
private inheritance- the protected and public data member of the base class 
                       is treated as private in the derived class
the private member of the base class is not accessible by the derived class 

protected Inheritance - The  protected and the public member of the base class is 
                       treated as the preotected members in the derived class 
                       - The private member is not accesible by the derived class 
public Inheritance - The public member of the base class will be treated as 
                    public member in the derived class 
                  - The protected member of the base classs will be treated as 
   		   - protected member in the derived class 
 		  - The private member is inaccessible  by the derived class 

 
*/

// here we will see the polygon class as the base class and Rectangle and traingle as their derived classes 

#include <iostream>

using namespace std;

class Polygon {
protected:  
int height;
int width ;
public :  
// no constructor is being provided using as default constructor 

void setVal (int a , int b) {width = a ; height = b ; }
};

class Rectangle : public Polygon {
    public: 
    int area () {return width * height ; }
};

class Traingle : public  Polygon {
    public :
    int area () { return  (width * height) /2 ; }
};

int main () {
    Rectangle object1;
    Traingle object2;
    object1.setVal (5,7) ;
    object2.setVal (223,444) ;
  
  cout<<"Rectangle object1 area will be displayed " <<object1.area() <<'\n' ;
  cout <<"Traingle object2 area will be displayed " <<object2.area() <<endl;

  return 0 ;

}


// Note -> please refer to Inheritance2 where there is listed that 
//derived constructor will always calls the base constructor and destructors 
// before the derived constructors and destructors unless there is invoking of the base class constructors
// using member initialization list in the derived class.