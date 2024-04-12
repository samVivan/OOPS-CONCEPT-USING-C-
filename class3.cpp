


// Questio here arises is what if we call the area member function before the set_value function ?  
// ans - the result will be undertermined as initally the height and witdth member has been never assigned the value 
// so this makes the compiller to evolve to concept of CONSTRUCTOR  here.
/*   So what is CONSTRUCTOR  actually  ?
   ans - CONSTRUCTOR is specialize member function who dont have return value and there can be many constructor called constructor overloading.
        - CONSTRUCTOR is in the program to make the compiler to realize we can call the area function here wihtout calling setvalue function before here 
            and constructor is called whenever the new object is created 
        - constructor comes in scenario to initialize the object and allocate the storage here.
        - constructor is only executed once.
        - constructor has been used here expicitly.
    
    SYNTAX - to  decalre the Constructor in the program just like regular function 
             BUT BUT BUT BUT  for declaration the matching name as the class name should be given to the constructor while declaring.
             clasname (int, int) ;  here inplace of int can be anything 


*/


// here we gona learn about the constructor 


#include <iostream>
using namespace std;

class Rectangle{

    int height ; 
    int width ;

    public : 
    Rectangle (int, int );  // this is the constructor here with same name as the class name and argument is being passed with only the type of argument not the actual argument 
                             // same as the set value method but instead of setvalue method we used constructor why ? you will see in the main function why its helpful

    int area () {
        return height * width ;
    }

} ;        

Rectangle :: Rectangle (int a, int b) {  // here defining the constructor member function outside the class in the same manner as set values method was defined earlier 
                                             // using the scope operator :: which defines that this member is like the member function inside the class 
          height = a ;
          width = b ;
}

int main () {
    Rectangle recta (30,44) ;  // directly subsutituting the values intead of writting the separate set value function so this is way the constructor is used 
    Rectangle rectb (99, 290)  ; // same but directely substituting the value while creating the object or we can say passing the argument
   
   cout<<" AREA of obj1: "<< recta.area() <<endl;       // now calling directly the area function without substituting the value before this is why constructor is used here.
   cout<<" Area of obj2 : "<< rectb.area() <<endl;

   return 0 ;
}

