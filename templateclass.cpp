/*  The class template is just like creating same as funciton template 
      but there are some differences 

      for declaration
     in function template ---    getMax<int> (x,y) ;  it the syntax example 
     but in class template --    mypair<int> myobject(112,232) ; is the syntax for int 
                        -----   mypair<float>myfloats (12.2,3.34) ; is the syntax for float and the class is same here 

    one more thing this declaration above is inline function declarations using the constructor
    but to declare and define member function outside the class is done 
    T mypair<T> :: getMax() { }  is the constructor defination outside the class  where T is the class identifier 

    and we call or invoke the constructor 
    by writting 
    mypair<int>myobject (100,93) ;
    cout<<myobject.getMax<<endl;
    so basically while initializing the objects it also creates storage obivios so we get the member function using  dot operator

*/

// for template class examples

// #include <iostream>
// using namespace std;

// template <class T>

// class myPair {
//     T value [2];  // array contianer named values and has a type T which can be int,float,char,etc ....
//     public: 
//     myPair (T first, T second) :  value{first,second} {}   // value[0]{first},value[1]{second} is not correct syntax to initilaze array as it should be intialize at once in the constructor 
    
//     T getMax () {
//         return (value[0] > value[1]? value[0]: value[1] ) ;
//     }
// };
// int main () {
//     myPair<int>obj(100,232);
//     cout<<obj.getMax()<<endl;
//     return 0 ;
// }




// now the beauty of template is I can use same class for creating float or double object also 


// #include<iostream>
// using namespace std;
// template <class T>

// class myPair {
//     T value [2];  // array contianer named values and has a type T which can be int,float,char,etc ....
//     public: 
//     myPair (T first, T second) :  value{first,second} {}   // value[0]{first},value[1]{second} is not correct syntax to initilaze array as it should be intialize at once in the constructor 
    
//     T getMax () {
//         return (value[0] > value[1]? value[0]: value[1] ) ;
//     }
// };
// int main () {
//     myPair<double>obj(100.020,23.022);   // here I changed the int type to double as the syntax is myPair<T>obj(a,b);   
//     cout<<obj.getMax()<<endl;
//     return 0 ;
// }


// now on cumallating the task here but with a differnece that we will define the constructor outside the class 
// using the syntax  --   template <classT>
                    // --    T myPair <T> :: getMax)(){ // body; }


 #include <iostream>
 using namespace std ;

 template <class T>

 class myPair {
    T a, b ;
     
     public : 

     myPair(T first, T second): a {first} , b {second} {}

     T getMax () ;

 };

 template <class T>         // Template needs to be redefined for the constructor  defination outside the class
 T myPair <T> :: getMax (){    // syntax for defining the constructor for outside the class 
    T result = (a>b ? a:b);
    return result  ;
 }

 int main () {
    myPair<int> obj{23,12} ; // object declaration using custome T data type denoting int 
    myPair<float> obj1 {34.232,8383.2323}  ;   // object declaration for custom data type denoting float 

    cout<<obj.getMax()<<endl;
    cout<<obj1.getMax()<<endl;

    return 0;
 }

