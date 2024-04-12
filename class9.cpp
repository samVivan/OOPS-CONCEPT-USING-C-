/*  Operator overloading for non member function that means operatror overloading function will not be defined inside the class neither its declared

here we wiil see the non member fucntion taking two operands Left Hand operand , Right Hand Operand as arguments in the operator overloading function 

lhs and rhs and let see how its different 


*/
//  cannot make the data member private because the non member function 
// cannot have access to private data member 
// since using private data members and non member function I have to declare the friend class as non member function.

    #include <iostream>
    using namespace std ;

    class Cvector {

public: 
        int x ;
        int y ;

    
    // constructors 

        Cvector () : x{0}, y{0} {}
        Cvector (int a, int b) : x{a}, y{b} {}

    };



    Cvector operator+ (const Cvector& lhs, const Cvector& rhs) {

        Cvector temp ;

        temp.x = lhs.x + rhs.x ;
        temp.y = lhs.y + rhs.y ;

        return temp ;
    }

    int main () {
        Cvector real1 {44,23} ;
        Cvector real2 {20,199} ;
        Cvector result ;
         result = real1 + real2 ;  // result = real1.operator+ (real2);  cannot be used here becacuse operator+ is not a inline member function 

        cout<<"result of the vector: ( "<<result.x<<" , "<<result.y <<")" ; 

        return 0 ;

    }