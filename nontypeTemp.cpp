/* temp specialization for one class type and one fundamental data type in single template function   
note while declaring the specialiazation for a tempplate class we must need to define all its members even thouogh they are general or
identical class template.
why ? because there is no inheritance of members from the generic template to the specialiazation template 


we will look here non-type parameters for template here 

template agruments that are precceded with class name or typename keyword which represents types 
templates also have regular typed parameters similar to those found in the funcion 

let see down below 

*/

// sequence of elements 

  #include <iostream>
  using namespace std;

  template <class T, int N>
  class mySequence {
    T memblock [N] ; // directly declaring N under the array as in template its type is declared already 
                      // memblock is the identifier for type T array 

    public : 
    void setMember (int x , T value)  ; // setter member funciton declaration here 
    T getMember (int x) ;  

  };
 
  template <class T, int N>    //  template declaration  outside the class body 
 // in this function setmember it returns void as declared in the main class body for better understanding the set member function wont return anything 
  void mySequence <T,N> :: setMember (int x , T value){     // syntax for defining the inline constructor  

    memblock[x] = value ;  // passing the int x as the array size and overall the memblock[x] will be the value to outcome here 
    
  }
 template<class T,int N>
  T mySequence <T,N>:: getMember(int x) {  // here the syntax is same as the above just the argument passed is per requirement   
    return  memblock[x] ;   // here using the get member fucntion to return the value after allocating the x in memblock
  }

  int main () {
    // we can use template for multiple varriety of data types that means same template but differnt functionalities 

 mySequence<int, 5> myint ;   // providing the size to array using the object as myint with int x 
 mySequence <double, 5> mydouble ; // provideing the size of the array using the object as mydouble with int x so that it stores double

 myint.setMember (0, 100) ; //  here 0 is the postion of the array where 2101 will be kept using the setvalue function 
 mydouble.setMember (3,3.4164) ;  // here 2 is the positon of the array where 302.23232 will be set using the setvalue function 

 cout<<myint.getMember(0)<<endl;  // here asking the getmember function to return the value at position 0  of the array 
 cout<<mydouble.getMember(3)<<endl;   // here asking the getmember function to return the value at positon 2 of the array 

return 0;

  }


// note if you alter the poition for (int x, T value ) like (T value , int x) the compiller will provide garbage values why because when you we alter 
// position the value for fetching the result after the function alters and infact setting the values alter since all are integers heres on base part 