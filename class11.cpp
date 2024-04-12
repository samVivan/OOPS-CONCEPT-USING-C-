/* static member - This means of two things and class can have both
1. static data members - this is the common variable to all the object in the class and also known as class variable 
2. static member functions - which cannot access non static member function but enjoys the right for being accessed as the member function of the class.

static members enjoys the property of class Scope :: like int Dummy :: n = 0 ;
some rules:- 
- static members should be declared inside the class 
-static member must be initialized once anywhere inside the class but the initialization or defination of static member should not be inside the class dorectly.
- static data member can be accessed by 2 ways 
1. as object llike is static int n ; is the there and object a is there so the accessin of the data member is a.n;
2. as static member can be accessed directly  using the class name 

just remeber static variable is a non - member variable type means not inside the class directly but requires to be accessed like a member function/object of the class

*/

#include <iostream>
using namespace std ;

class Dummy {
 
 public: 

 static int n;      // static data member ;

 Dummy () {n++ ;}   // constructor declaration 

};

int Dummy :: n = 0;    // member funtion defined the static member using scope operator  or we can say constructor  for static member is defined 

int main () {
    Dummy a ;

    Dummy b [5] ;
   
   cout <<"accessed as object: " ;
 cout <<a.n<<endl;  

    Dummy *c = new Dummy ;    // creatng a pointer for object type Dummy 

    cout<<" accessed directly by the class: "<<Dummy :: n <<endl;  // since static variable is common to all the objects in the class it can be reffrered to any object of the class
       // or even directly by the class iteself.

delete c;
return 0;



}