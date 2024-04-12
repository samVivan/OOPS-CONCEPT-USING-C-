#include<iostream>
#include<string>
#include<sstream>

using namespace std;

struct movies_t{     // struct data type defination and declaration
    string title;
    int year;
} mine, yours;    // objects declared inside the data type

  // declaration of the function 
  void printmovie(movies_t movie); // passing arguments as movie which is data type of movies_t

  void printmovie(movies_t movie){
    cout<<movie.title;
    cout<<"("<<movie.year<<")\n";
  }


int main (){
    string mystr;

    mine.title = "2021 A spaace odessey";
    mine.year = 1968;

    cout<<"Enter your movie";
    getline(cin, yours.title);

    cout<<"Enter the year";
    getline(cin, mystr);
    stringstream(mystr)>>yours.year;  // concert string into year

    cout<<"My favorite movie is: \n";
    printmovie(mine);

    cout<<"Yours Favourite movie is: \n";
    printmovie(yours);
   
   return 0;

}

/* things to learn from this code to apply 
1. objects can be declared while creating datatypes or after the semicollon also
2. create normal member function to operate on data types
3. stringstream is used explicitely to convert string to integer 
4. passing the object of moives_t movies to perform genralized task



