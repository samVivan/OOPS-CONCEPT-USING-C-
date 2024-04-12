// class is the special data type and specifically designed for the expansion of the struct data type with the right  of access of the members private protected and public 
// class has data member private by default 
// private - data members inside this access specifier can be accessed by the member function within the same class and by the friend class only.
// protected - data members insde this acceess specifier can be accessed by the member function within the samw class and by the friend class and by the derived class 
// public - data members inside this access specifier can be accessed by the member function from anywhere .

// objects are the instances of the class 

#include <iostream>
using namespace std;

class Rectangle{
    int height;
    int width;

    public: 
    void set_value(int, int)  ;   // just passing the argument type inside the member function 
   
    int area () {
        return width * height;      // another inline member function 
    }
};

 void Rectangle :: set_value( int x, int y) {     //   scope is used for 2 points -  it makes the compiler realized that it is the member of the class itself and must follow the same rights 
                                                   // of access as public protected and private. its not inline member function.
    height = x; 
    width = y;

 }
 int main ()  {
   Rectangle rect;      // creating object as Rectangle is the class data type and rect is the object as variable same as int a where int is a datatype and a is the vatiable as object
   rect.set_value(3,4);      // passing the value calling the void set_value method for passing the values and its converterted from x and y to width and height 

   cout<<"area: " <<rect.area();   // using dot operator to call the member function area 


return 0;

}