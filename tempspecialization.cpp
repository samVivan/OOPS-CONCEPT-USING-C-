/*    if we want to define different implementaion for the template when particularly specific type is passed as template parameter we need template specialization 
  in short we can modify template also for particular type while most of the class will remain same 

  for better understanding lets take an example here

  lets suppose ther is a class called container which accept a single value in form of integer 
  and the class also contain a member function here which increases its values to next for if  4 than function will make 5 
  now what if the value is given a char type which is completely different here 

  now for char it would be more conviniant if we define the template specifically for it 
  for lower case letter j it will turn to upper case letter J here as output while going under the some function 

  remember syntax for Template specialiazation is here 

  template <> 
  class myContainer <char> { / body ; } ; will remain same for all specialiazation except char willl be fundamental data type 


*/

// Template specialiazation example 

#include <iostream>
using namespace std ;

template <class T>

class myContainer {

int element ;

public :

myContainer (T arg) : element {arg} {} // constructor for the class myContainer here

T increases () ;

};

template <class T>    // this is the structure syntax for defining constructor outside the class 
T myContainer<T> :: increases () {
    return ++element;
}

// now specialization template for char type 

template <>      // syntax for specialization template here 
class myContainer <char> {
    char element;

    public : 
   myContainer (char arg) : element {arg} {}
   char upperCase();

};

template <>
char myContainer<char> :: upperCase() {
    if ((element >= 'a') && (element <= 'z' )) {
        element -= 'A'  - 'a' ;   
    } 
    return element ;
}

int main () {
    myContainer<int>obj{201};

    myContainer<char>obj1{'j'} ; 


    cout<<obj.increases()<<endl;
    cout<<obj1.upperCase() <<endl;

    return 0 ;

}


// there is some issue in the code we will find it latter .......?