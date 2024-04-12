/*   Here we can use 2 types of diffrent parameter for comparison and creating the template.
*/


#include<iostream>
using namespace std ;

template <class T, class U >   // two classes for taking two types of data as input 

T getMax (T a, U b) {  // two differents parameter   this is  the function defination here 

  return (a>b ? a:b) ;
}

int main () {    // in this main function I have compared int with double 
    int i = 192211 ;     
    double  k = 2229.023  ;

    cout<<getMax<double>(i,k)<<endl;   
  

    return 0 ;

}

