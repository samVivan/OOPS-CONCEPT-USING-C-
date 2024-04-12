// POINTER IS THE REFFERENCE TO THE ADDRESS OF THE OBJECT OR VARIABLE 
// THIS EXMPLE FOCUS ON ARROW OPERATOR IS A DERREFERANCE OPERATOR 
// POINTER SHOULD BE MATCHED WITH THE DATA TYPE  OF THE OBJECT
// MOST OF THE CODE BE INSIDE THE MAIN FUNCTION MEANING IT WILL CONSIIST MORE LOGIC 

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

struct movies_t {

    string title;
    int year;

};



int main () {
   string mystr;
  // note there are other ways to declare and define pointer here 
   movies_t a_movie;  // object of types at movies_t
   movies_t *p_movie;   // pointer of types movies_t
   p_movie = &a_movie;  // memory address of the object a movie is refferenced  to p movie 

  cout<<"Enter the title ";
  getline(cin, p_movie->title);  // notice instead of dot operator used the arrow operator for dereferencing the pointer

  cout<<"Enter the year: ";
  getline (cin, mystr);

  stringstream (mystr) >> p_movie->year;   // again notice instead of the dot using arrow operator  converting string to integer

  cout<<"you have entered:    ";
  cout<<p_movie->title;
  cout<<"("<<p_movie->year<<")\n";
 

 return 0;


}


// there is no member function to do the seperate operation cannot be called for the length programs
// stiil there is a possibility for creating struct type object without the member function 
// after assigning pointer to the object the manipulation should be done with only pointers.
// pmovie->title =  (*pmovie).title   this both are same as for derefrencing the pointer to manipulate the values 




/* other structs called nested structs 

struct movie_t{        
    string title;
    int year;   
};

struct friends{
    string email;
    string name;
    movie_t favouraible_movies;
} charlie, maria;

friends_t *p_friends = &charlie;

the thing is the movie_t datatype will have members as title and year 
but the friends type will consist members of email, name, movie title, movie year too 
that mens that the charlie and maria as an object will consist all four the email ,name, movieyear, moviename.


DATA TYPES OTHER 
1. TYPE ALAIAS  LIKE  typedef and using 
typdef - syntax =====   typedef existing_datatype  newtype_name;   eg ---  typedef char c;        // has limtiation in templarte realm 

using - syntax -------- using  new_data_type_name = existing_data_type    eg --   using c = char;      //has no limitation anywhere 

2. unions same like struct but single memory have differnt variable type and one member will be active at a runtime and 1 memeber value change will result to change in every member with the same equivalent value 
eg --  union real{       // can be anonymous also with no union name 
    int l;
    char c;
    string s;

}mic;
3. enum - are the data types which dont need to be related with fundamental data type its unique and defined using enumurateed although the sequence internally the enumurators are from 0 to n 
  for example   enum colurs_t{ blue, black, greeen, red, yellow, voilet }  has internal indexing as 0,1,2,3,4,5   and so on 
  FOR EXAMPLE - colours_t mycolou;
                mycolour == red;

                if(mycolour==green) {mycolour == yellow};

4. enumclass - are the type same as enum iteslf as datatype so there is not place of internal sequence of integer here 
they are of it own enumtype itself we just need to scoped it with the type itself.
 
 for example               enum class colour {black,green,yellow,blue,red,orange};
                            colour mycolor;   // object created 
                                mycolour = colour::blue;
                                if(mycolour==colour::green){
                                    mycolour = colour::red;
                                }

 and to determine the size of                       enum class eyecolour : char {blue,green,white};
 
     eyecolour will have the distinct type and its size will be of size of char as 1 byte.
     


*/