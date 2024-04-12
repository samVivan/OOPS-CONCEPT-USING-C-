// friend function 

#include <iostream>
using namespace std ;

class Rectangle {
    int width;
    int height ;

    public: 
    Rectangle () : width{0}, height {0} {} 

    Rectangle (int x, int y ) : width {x}, height {y} {}
    int area () {return width * height ; }
    friend Rectangle copy (const Rectangle &) ;  // frined function declaration here 

};
Rectangle copy (const Rectangle & param) {
    Rectangle res ;
    res.width = param.width * 2;
    res.height = param.height *2 ;
    return res;
}
int main () {
    Rectangle rect ;
    Rectangle bar (3,5) ;
    rect = copy(bar);
    cout<<rect.area();
    return 0 ;

}
