/*  
Template are the designs used for genreic type of data type 
teemplate can be sub divided with 2 main category
- The major one is the Class Template and
- The main part is functional Template 

The functional Template here is the template for the genreic type for example syntax

lets consider function here  int getMax (int a, int b) {     THIS function will return Max of given two integer only 
    return (a>b ? a : b) ; 
    }   
but what if there is template whhich can take any fundamental comparable type to compare for that only one template is enough .
template <class myType>
myType getMax (myType a, myType b) { 
     return ( a > b ? a : b) ; 
      }

so this template function will serve more than one type of data that is long,short, int any other comparable value.

so function template syntax is  ---------     template < data_type_name   identifier > function declration ; 

similarly we can write syntax for class template as ------------   template <class identifier> function declaration ;

here both  class and data_type_name is both keyword for creating template under the < > this brackets.

How will you do function calling is ?  -----    syntax is =>                  function_name <type> (parameter) ; 
  example int x, y ;   getMax <int> (x,y) ;  // is a function tmeplate calling 
  its only difference as compared to function decalration as getMax(arguments) is just adding <data_type> to the same funcion declaration after the function name but before the parenthesis begimn.


  idea - <> under this bracket anything data type used than its a part of the template here.

  function defination syntax ----------      identifer_of _type_class    functio_name (arguments of type class on which the template was been declared){
                                                //body 
                                            }


  note Template funcion allows to pass function also as parameters.

  template parameter are special kind of parameter that can be used to pass a type as arguments just like regular function passing fundamental data type as parameter as arguments.
  the only difference is template pass the the parameter as a type but function pass the parameter as particular data type ;


  use of template is because it stops the use of repetative code for same task but of different data type.


func




*/

// function template using class I know till now we are not properly familar with the full functionality of the class Template we will be looking in the next codes


#include<iostream>
using namespace std;

template <class Mytype>     // class Temolate declaration 
Mytype getMax (Mytype a, Mytype b) {     // function template defination 

    Mytype result; // Mytype also hekps to create new objects here as its class type 

    result = (a > b ? a : b) ; // condition to check maxiumum of 2 numbers 
}
 int  main () {
    int i, j , n;
    cin>>i>>j  ;
   long x, y, z;
   cin>>x>>y  ;

  n = getMax<int>(i,j);  // template function declaration  for normal int type

  z = getMax<long>(x,y);  // template function declaration for long int type 


    cout<<n<<endl;
    cout<<z<<endl;

  return 0;



}


