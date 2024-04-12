/* using the (this) keyoword here 

- (this) keyword is a pointer to the object whose member function is being executed.
- (this) keyword is used within the class member funciton to refer to the object itself 
- if parameter is passed to member function and that member function and the object of this member function is itself a member function ther we can check this operator

*/


// normal member function to use this keyword 

#include <iostream> 
using namespace std;

class Cvector {
    public:    // data member made private because the member outside the class cann acceess the private data member unless its friend class
    int x ;
    int y;

    Cvector () : x{0}, y{0} {}
    Cvector (int a, int b) : x{a} , y{b} {}

    Cvector operator+ (const Cvector& param){
        Cvector temp; 
        temp.x = x + param.x ;
        temp.y = y + param.y ;
        return *this ;   // pointing to the object temp whose member function is being excuted 
    }

};
int main () {
    Cvector real1 {44,33} ;
    Cvector real2 {10,20} ;
    Cvector result ;
   result = real1.operator+(real2);
   cout<<result.x<<","<<result.y;
   return 0; 
}





























/*  note here I have taken non member function but declared it inside the class and defined outside the class so it is the member function which will follow the same propertie of the class 
this is the reason I have used this keyword also here since this keyword is used while inside the member functon as an alternative case  while making the data member private */


   #include <iostream>
   using namespace std; 

   class Cvector {
     int x;
     int y; 
     public: 
     Cvector () : x{0}, y{0} {}
     Cvector (int a, int b) : x{a} , y{b} {}

     Cvector operator+ (const Cvector&) ;

     int getX() {return x ; }
     int getY() {return y ; }

   };

Cvector Cvector :: operator+ (const Cvector & param) {
    Cvector temp;
    temp.x =  x + param.x ;
    temp.y = y + param.y ; 

    return *this ;
}
int main () {
    Cvector real1 {33 , 33} ;
    Cvector real2 {10,22} ;
    Cvector result ;

    result = real1.operator+ (real2);
    cout<<"("<<result.getX()<<","<<result.getY() <<")";
}



/* this keyword conceptual proof */

#include <iostream>
using namespace std ;

class Dummy {
    
    public: 
    bool isitme (Dummy&param) ;  // the is the member function 
};

bool Dummy :: isitme(Dummy& param) {   // defining the member function outside the class 

    if(&param == this ) return true;       // this is to verfiy that this is the pointer pointing to the object param
    else return false;   
}

int main () {
    Dummy a ;     // object declared

    Dummy *b = &a ;   // pointers created and pointing to a

    if (b-> isitme(a))             // this condition says that by derefrencing the pointer b will be same as pointing to a

    cout<<"yes  &a is b"<<endl;

    return 0;

}