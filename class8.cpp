 /* OPERATOR OVERLOADING 
 operating overloading generaly means to oveload the operator to some different function other than its main function 
 such as c = a+ b for int a,b,c; is quit understandable but class objects a , b, c the ecxpression c = a +b is not at all valid 

 c++ allows all the operators to be overloaded except these operators (::), (.), (sizeof),(?:),(->),(#)
 the names are - Scope resolution operator, dot operator, sizeof operator , conditional operator (terinary operator),(arrow operator), (preprocessor derivatives)

 The operator exept above can be overloaded using 1 things 
 1.operator overloading member funcions  -- these are the special member function uses operator (sign) keyword as special names in the function 

syntax of operator overloading member function 

type operator (symbol) (paramters) { /body }

now lets consider the expression c = a.operator+ (b); is the actual valid expression if a,,b,c is classes objects as we will see later in the programe

so in the member function the parameters of the function is considerd as operand to Right Hand Side 
but in non member functiom there is 2 operands recquired Left Hand Side and Right Hand Side operrands 

so whats the difference of use of operators in member function  vs non member function 

member function - these are the function like inline function which are defined inside the class but it is defined to overload an operator for that class.
                - in binary operation it requires only one operand that is on the Right Hand Side and its member takes one operand as argument inmplicitely on which object its been defined
                -  for example =>    A operator+ (const Cvector) === A is the class type and operator+ is a member function 


Non - member function - these are the stand alone functions which dont have access to the private members of the class  but its also used to define the operator overloading function 
                      - in binay operation the member function explicitelty takes the 2 operands as areguments
                 

Just rember the function(operator+) of a class can overload operator either implicitely taking one operand or one argument or explicitely as 2 operands as arguments using its functional name.

*/

// overloading operators using implicit operands for cartesian addition (x1,y1) + (x2,y2)

#include<iostream>
using namespace std;

class Cvector {
  
  public: 
    int x ;
    int y ;  



Cvector () : x{0},y{0} {}; // default constructor declaration 

Cvector (int a, int b) :  x{a}, y{b} {}  // uniform initialization syntax for constructor declration and defination here

Cvector operator+ (const Cvector&) ; // operator function declaration 

};
// type // classname or constructor name :: cons   === inline memberfunction or it is the overloading operator inline member function using oonly one operand

Cvector Cvector :: operator+ (const Cvector& param){
    Cvector temp ; // new object declaration 
// since consider temp being the final result object which will give the final value of x and y after addition here 
    temp.x = x + param.x ; // accessing x data member using both the object and adding simultaneously 
    temp.y = y + param.y ; // accessing  y data member by objects temp and param both and performing the addition 

    return temp ;

}

int main () {

    Cvector real1 {9,1} ;
    Cvector real2 {2,11} ; 
    Cvector result ;

    result = real1 + real2 ;  // result = real1.operator+ (real2); c = a.operator+ (b)

    cout<<"The result is : ("<<result.x<<" , "<<result.y<<")"<<endl; 

    return 0;

}







// Since  the member function can only aceess the private members of the class so the above and below examples are having the non member functions which cannot access the private data member
// using the getter and setter function maintianing the privacy of the data members 
#include <iostream>
using namespace std;

class Cvector{
  
  int x ;
  int y ;

  public: 
  Cvector (): x{0},y{0} {}
  Cvector (int a , int b) : x{a} , y{b} {} 

  Cvector operator+ (const Cvector&);    // operator funciton declaration 

  int getX() {return x ; }  // getter function to acess the private data members 
  int getY() { return y ; } // getter function 

};

Cvector Cvector ::  operator+ (const Cvector& param) {
    Cvector temp; // Cvector type another object which will cumulate the result 

    temp.x = x + param.x ;
    temp.y = y + param.y ;

    return temp;
}

int main () {
    Cvector real1 {33,33} ;
    Cvector real2 {22,19} ;

    Cvector temp_result ;

    temp_result = real1.operator+ (real2) ; 
  // temp_result = real1 + real2 ;

  cout<<"The result is: ("<<temp_result.getX()<<" , "<<temp_result.getY()<<" ) ";
}