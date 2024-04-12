// friendclass example consting friend fuunction 

#include <iostream>
using namespace std ;

class square ;

class Polygon {

int height ;
int width ;

public : 
Polygon () : height{0}, width{0} {}
int area () { return width * height ; }
void convert (square a);


};

class square {
    friend class Polygon ;   // friend class declaration 

    private : 
    int side ;

    public: 
    square (int a ) : side {a} {}

};

void Polygon :: convert (square a) {
    width  = a.side ;
    height = a . side ;

}

int main () {
    Polygon rect ;
    square sqr(4) ;
    rect.convert(sqr);
    cout<<rect.area() <<endl;
    return 0 ;
}