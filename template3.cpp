/* 
  now here we will understand without determining the compiler explicitely which template function to be called 
  by just matching the parameter 

*/

#include <iostream>
using namespace std ; 

template<class T> 

T getMax(T a, T b) {
    return (a>b ? a: b) ;
}

int main () {
    int x = 10 ;
    int y = 20 ;
    double l = 34.43 ;
    double m = 22.2929;

    cout<<getMax(x,y)<<endl;   // here I did not mentioned <int> angle brackets to indicate to compiler hence the compiler automatically detects function according to parameter 
    cout<<getMax(l,m) <<endl;   // here also compiler directly detects the function automatically while matching the parameters 
    

    return 0 ;


}