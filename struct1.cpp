// using arrays of movies_t to contain the elements 

#include <iostream>
#include<string>
#include<sstream>

using namespace std;

struct movies_t{
    string title;
    int year;
} film[3];  // declared array of film as object/variable  with data type as movies_t

void printmovie(movies_t movie);   // declaring memberfunction

void printmovie(movies_t movie){    // member function defination here 
    
        cout<<movie.title;
        cout<<"("<<movie.year<<")\n";

}



int main () {

string mystr;

int n;

for (n=0; n<3; n++){
    cout<<"Enter the title: ";
    getline(cin,film[n].title);

    cout<<"Enter the years: ";
    getline (cin, mystr);

    stringstream(mystr)>>film[n].year;  // convert the sting into integer explecietly

}

cout<<"your entered movies: \n";

for (int n = 0 ; n<3; n++){
    printmovie(film[n]);
}


return 0;


}

/* see there are 2 variable declared as of movies_t data type 
1. film
2. movie
dont get confuse as film is the storage place where the name has been stored 
movie is the object of the member function who gets printed out 

*/