/* -Uniform inistialization-
    there are 4 different syntax to call the constructor here is the list of the exmaples

    here Rectangle is the classname and rect is the objectname 

    1. functional form syntax for calling the constructor  --  Rectangle rect (3,4) ; the parenthesis enclosing the arguments.
    2. variable initialization syntax for calling the constructor --  Rectangle  rect  = 3 ; If the parameter is single 
    3. uniform initialization syntax for calling the constructor  -- Rectangle rect {3,4};  Arguments enclosed with curly brackets
    4. pod like Initialization syntax for calling the construtor  -- Rectangle rect = {3,4} ;   mix of variable initialization with uniform initialization.



    note :-  uniform initialiozation  syntax matches with list_initialization in templates which is a consnt type T rest you can seee in detail via source cpplus.com



*/


#include <iostream>
using namespace std;

class Circle {

    double radius ;    // by default private 

    public: 

    Circle (double r) {   // functional form initialization  (double r)  atgument enclosed with parenthesis 
        radius = r ;       //  inline special member function constructor
    }  

    double Circum () {              // member function inline 

        return radius * radius * 3.1457 ;
    }

};

 //constructor defination outside the class

// Circle :: Circle (double r) {
//   radius = r ;
//   }

  int main (){

    Circle foo (30.23) ;   //   functional form;

    Circle foo1 = 20.44 ; //  variable initialzation syntax 

    Circle foo2 {91.222} ;   // uniform initialization calling 

    Circle foo3  = {10.83}  ;  // pod like initialization 


    cout << "foo Circumfrence :  " << foo.Circum()<<endl;      // calling member function using the functional form and the rest continues 

    cout << "foo1 Circumfrence :  "<< foo1.Circum () <<endl;

    cout << "foo2 Circumfrence :  "<<foo2.Circum () <<endl;

    cout << "foo3 Circumfrence :  "<<foo3.Circum () <<endl;

    return 0; 

  }
