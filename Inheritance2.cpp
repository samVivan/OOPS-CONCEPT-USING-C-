/*In Inheritance not everything can be inherited with respect to data members 
so basiclly here is the listed contents which are not inherited from the base class 
1. its constructors and destructors 
2. its assignment operator members (eg, operator= ,operator+)
3. its friends function or friend classes 
4. its private members 

Note:->
1-> The Derived class will always call the base construtors and destructors in every case 
2-> When we explicitely call the base constructor using the member initialization list 
then the derived class will not call the default constructor of the base class

Summary - The derived class will always call the base construtors any how 
we can only customize which constructor of the base class to be called first using member initializatio list 



syntax ---->   derived_constructor_name(parameters) : base_constructor_name (paramters)
{
// body ;
}
 

// calling the constructor of the base class from the derived class 

*/


#include<iostream>

using namespace std ;

class Mother {
    public :
    Mother ()  { cout<<"Mother has no parameter"<<'\n'; }   // its the default constructtor

    Mother (int a ) {cout<<"Mother has an int parameter"<<'\n' ; }  // customized constructor with 1 parameter
    
};

class Daughter : public Mother {
    public:
    Daughter(int a) {cout<<"Daughter class has int parameter " <<'\n' ;}
};

class Son : public Mother {
    public: 
    // this is the synax for calling the constructor of the base class being called by the derived class
    Son(int a) : Mother (a) { 
       cout<<"Son class Constructor has int Parameter"<<'\n';
    }
};

int main () {
    Daughter kelly (0) ;
    Son better(0); 
    return 0 ;
}

/* here This is the output of this code 

Mother has no parameter 
Daughter class has int parameter
Mother has an int parameter
Son class Constructor has int Parameter

here line 1 -> called because there is no explicitely invokation of the constructor using 
member initialization list  in the daughter class 
thats why 1st- default Constructor of the base class has been called 
2nd line 2-> the constructor of the derived class has been called 

line 3-> there is the use of member initialization list invoking of the constructor in the Sons class
and thats why 
1st the intialized construcotor of the Mother class is being called in line-3 
line 4 -> here this is the constructor of the Son class being called in the next line 

let me state clearly the invoking here means setting the order of the constructor being called in certain order 
or else the constructor of the base class will be called first no matter whatever the case.






*/