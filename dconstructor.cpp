/*  Terms to be familar with 
1. Default Constructor  - this is the constructor which are implicitely called by the compiller 
                        - and when if its called implicitely it has no arguments to be passed 
                        - condition is that when there is no explicitely defined constructor is present for the concerned object the default constructor is being called 


*/
// Default constructor 

#include<iostream>
using namespace std;

class Polygon {
    int height ;
    int width ; 

    public:
    Polygon(): height{0}, width{0} {}  // default constructor 
    Polygon(int x , int y) : height{x},width{y} {} // parameteize constructor 
    
    int area () ;  // member function declaration 

};

Polygon :: area(){
    return 2 * height * width ;
}

int main (){
    Polygon obj1 {32,23} ;
    Polygon obj2;  // here the declaration of the obj2 witout the arguments signifies the default constructor has been called by the compiller to initialize the object 
    cout<<obj1.area()<<endl;
    cout<<obj2.area()<<endl;  // the deafult constructor is resulting the value here 
    
    return 0;
}