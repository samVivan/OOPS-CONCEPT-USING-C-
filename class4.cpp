// overloading constructor 
/* Overloading Counstructor is in the scene because the constructor is also a function but its special function.
and just like function which can be overloaded with 2 ways similarly special function constructor can be overloaded in 2 ways 
 1. using diffrent type of parameter 
 2. using different number of parameter 
 overloading of contstructor will have the same level of interferance with the program as the constructor itself

 vvip -- compiler calls the mathing constructor as compared to the parameters passed automatically so we are not required to pass any statement to do so in use of overloaded constructor
*/

#include<iostream>
using namespace std;

class Rectangle {

private: 
int height ;    // data members
int width ;

public:  

// here there are 2 constuctor which is called overloading of the constructor

Rectangle () ; // constructor declaration without any arguments 

Rectangle (int, int)  ; // constructor overloaded declaration prototype just passing the type of argument which will be passed 

int area () {
    return height * width ;    // memeber function declaration which is inline member function 
}

};

Rectangle :: Rectangle (){   // 1st constructor defination outside the class 

   height = 5 ;
   width - 5 ;
}
Rectangle :: Rectangle (int x, int y) {   // 2nd constructor definaiton outside the class 
    height = x ;
    width = y ;
}

int main () {

    Rectangle rect (188,383) ; //   CONSTRUCTOR CALLING object declaration with the 2nd type format of constructor  and remember directly assigning the value instead of using the set_value member function
    
    Rectangle rectb ;    //  CONSTRUCTOR CALLING  object declaration of the 1st type format of constructor which is void  and has no value to be passed but still initialized here 

    /* notice here the 1st type constructor object is not declare with empty parenthesis as the constructor format like  " Rectangle rect ()  "  as this is not the right format
    since with the parenthesis it will be like function declaration without any argument but returning the rectangle type  */

    cout << "Constructor 2nd result "<<rect.area()<<endl;

    cout <<"Constructor 1st result "<<rectb.area()<< endl;

    return 0;
 
}

// just remember here compiler automatically calls the constructor matching its parameter type without writing any line to specify that  task.
