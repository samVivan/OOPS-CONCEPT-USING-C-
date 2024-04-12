/* Implicit Members are the implicit invoking of specialMembers and these members 
are 

default constructors       no custom constructors  
destructors        no  custom destructors 
copyConstructor     no custom copyconstructor no  moveconsructor   no moveAssignment 
move constructor     no custom  moveconstructor no copyconstructor  no destructors 
		     no moveAssiginment no copyAssignment 

move assignment operator    no custom copyconstructor no copy assignment operator 
				no destructor  no copyAssign=ments no moveAssignment

copy assignment operator      no custom moveconstructor no move assignment operator 

The main use of the studying implicit special members is thus we can also control
The generation of the default members like 

default keyword - suppose you have  custom copy constructor thus compiller will 
not generate the implicit copy constructor since its already been defined in the
code now here
 
by writing default beside the copyconstructor will  specify the compiler to generate
default Copy Constructor even if there is explicitely defined member function.



delete keyword - suppose  you have customized copy constructor defined and use 
in the code and now you dont want that this copyconstructor to be used again 
in the code so you use delete keyword which specify the compiller not to 
use this datamember in the later use.

so generally when to use default and delete keyword 
classes that explicitely define  1 copy or move constructor or 1 move or copy  
Assignment operator but bu but not both  
are encouraged to specify delete and default on the other special member functions
that dont explicitely defined.

*/

// use of delete and default keyword in implicit members  
#include <iostream>
using namespace std ;

class Rectangle {
int width ;
int height ;

public :

Rectangle (int x , int y) : width (x) , height (y) {}

Rectangle () = default ;  // specific command to compiller use default constructor
                           // even if the custom constructor is being defined  

Rectangle (const Rectangle& other ) = delete ;  // copy constructor is made to 
                                        // delete the this member function after used

int area () { return width * height ; } 
};

int main () {
Rectangle object1 ;
Rectangle object2 (10,20) ;
cout << "object2 area is being displayed "<<object2.area()<<'\n' ;

return 0 ;


}


