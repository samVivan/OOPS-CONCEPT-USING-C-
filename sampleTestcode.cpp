/* #include <iostream>
#include <string>

using namespace std;

class moveConstructor {
    string* ptr;

public:
    moveConstructor(const string& str) : ptr(new string(str)) {} // customize constructor

    ~moveConstructor() { delete ptr; } // destructor

    moveConstructor(moveConstructor&& X) : ptr(X.ptr) { X.ptr = nullptr; } // move constructor

    moveConstructor& operator=(moveConstructor&& X) {
        delete ptr;
        ptr = X.ptr;
        X.ptr = nullptr;
        return *this;
    }

    const string& content() const { return *ptr; } // get member function

    // additional operator Assignment

    moveConstructor operator+(moveConstructor&& rhs) const {
        // Creating a new object by moving the concatenated string
        return moveConstructor(content() + rhs.content());
    }
};

int main() {
    moveConstructor object1("Exam");
    moveConstructor object2("ple");
    object1 = object1 + move(object2); // Moving object2 into the operator+

    cout << "object 1 is being displayed here:->  " << object1.content() << '\n';

    return 0;
}
*/

// creatring a code for friend class

#include<iostream>
using namespace std ;

class Square;  // declaration of Square class to treat objects of square 

class Rectangle {

private : 

int height ;
int width ;

public : 

int area () { return width * height ; }  // memeber function which will provide the area 

 void Convert (Square object1 ) ; // member function which will convert the height and width of the rectangle just a side of square 

};

class Square { // here comes the defination of square class 

friend class Rectangle ;  // declaring the Rectangle as friend of Square Class 

private :
int side ;

public : 

Square (int object1) : side (object1) {} // this is customize constructor to initialize the Square with an object1 which will be passed as side 

};

 void Rectangle ::  Convert ( Square object1 ) { // convert function defination outside the class and will be accessed as non  memeber function but can access the  private data members  

  width = object1.side ;
  height = object1.side ; 

}

int main () {
Rectangle object2 ;  // declaration of the  Rectangle object as per constructor initalization 
Square object3 (4) ;
object2.Convert(object3);

cout<<"object2  that is the data of converted square a area will be diplayed :-> " <<object2.area()<<'\n' ;
return 0 ;
}

