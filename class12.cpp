/* constant member function is denoted  by the keyword (const)
constant member function means 2 ways :-
1. const object member 
2. const member function 

they follow some rules:-

const data member- when an object is declared const the access to this objects turns to only read and cannot be changed anywhere 
                 - const data member can only be changed using the constructor initalization 
                 -  const object can call only const member function  when the data member is private in the class main body and ther is any modification made in the data member 
                
const member function - when the function is termed const it becomes only readable outside the class or anywhere 
                      - const member function cannot modify non static data members 
                      - const member function can modify static data members (assumption)
                      - const member function cannot call non constant member dunction 
                      - const member function can only call the const data member not the non-constant object 
 Note - the call word 


remember in short with example 

int get() const{retrun x ;}  // constant member function  returning an integer
const int& get {return x ; }  // member function returning a constant 
const int&get const {return x ; }  // const member function  returning the constant.

*/
// constructor initialization on const objects 

#include <iostream>
using namespace std;

class Constant_cl {
     public:  
   int x;

 
   Constant_cl (int val) : x {val} {} 

   // getter member function 
    int get() {return  x ;}

};

int main () {
    const Constant_cl num {30};
    // num.x = 40 ; is not possible here 
    cout<<num.x<<endl;  // data member just can be read 
    return 0 ;
    
    }



// anothe example of the same code but making the x data member as private access which can be fetched outside the class with the help of getter method
// another point is that the constant object created in the main function can cll only to const member fucntion note when the data member is private 

#include<iostream>
using namespace std;

class Constant_cl {

int x;

public: 

Constant_cl (int val) : x{val} {} 

// getter function made to be constant to be accessed by the const object 
int getX() const {return x ; } 

};

int main () {

   const Constant_cl num {30};
   // num.x = 40;  not valid 
   cout<<num.getX()<<endl;

   return 0 ;
}






// same example but little different as using the constant member function of get 
// note data member is private her 

#include <iostream>
using namespace std ;

class Constant_cl {

 int x;

 public : 

 Constant_cl (int val): x{val} {} 

 // getter function constant and returning also the constant 

 const int &get () const {return x ;}  // see how the constant member function is declared using &get it can be replaced as &getX()

};

void print(const Constant_cl &arg ) {   // non const another member function with const obj means it can be called by the const object 
    cout <<arg.get()<<endl;
}

int main () {
    const Constant_cl num {83} ; 
    print(num);
    return 0 ;
    
}



// another example which states clearly the compiller calls the constructor according to the const obj and const member function 

#include <iostream>
using namespace std;

class Constant_cl{

    int x;

    public: 

    Constant_cl (int val): x{val} {}

    // two getter funciton one for constant and another non constant 

    const int&get () const {return x ;}    //constant memmber function returning const 
    int &get() {return x ;}              // non const member function returning int 

};

int main () {
   const Constant_cl num {30} ; // constant obj
                     
   Constant_cl num1 {40} ;    // non constant obj 

   num1.get() = {45};  // non constant obj is changed here 

   // num.get() = {20} ; is not valid 

   cout<<num.get()<<endl;
   cout<<num1.get()<<endl;

   return 0 ; 

}