 // class 1 similar type of example but with more objects 
 //usage of class can be seen here 
 // note we dont need to define the values for each variables separately and or we say we dont need to do the repitative type 
 // carry handlers decicde thier own repective values no need to define separately 
 // both the objects will have their unique height and width 


#include<iostream>
using namespace std;

class Rectangle {
    private: // this access specifier is optional to define I repeat its optional to define as class will have the their  data member  by default private 
    int height ;      // data members
    int width ;     // data members 

    public:                // public access specifier as it can be accessed from anywhere 

    void set_value (int, int) ;   // member function declaration  inside the class body 

    int area () {
        return width * height ;    // inline member function defined inside the class body thats why its inline member function 
    }

};

    void Rectangle :: set_value(int x, int y) {    // the insde declaration of the member function set_value has been defined here outside the class using the scope operator telling the compiler to treat 
                                                    // this member function as its inside the class body itself and follows the same right of access of the data memeber as supported by the class.
        height = x;
        width = y;      // two data members has been assigned the variables x and y in order to get the area 

    }



int main () {
    Rectangle recta, rectb;      // creating 2 objects here 

    recta.set_value(1,4) ;          // passing the values to the set_value void member function to assign the value to x and y
    rectb.set_value (19,65) ;        // again seting the values to another object differently

    cout<<"Area of rectangle 1st object:  " <<recta.area()<< endl;    // notice I have not passed the values of x, y sepearately as its same as class1.cpp program 
                                                                       // these member function does not needed to define separately for the values cause its already define above
    cout<<"Area or rectangle 2nd object: "  << rectb.area();

    return 0; 
    
}