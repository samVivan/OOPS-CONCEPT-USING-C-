#include<iostream>
using namespace std;

class Circle {
    private: 
    int radius;
    public: 
    Circle(int r) {   // constructor
    radius = r;
    }
    //method or memberfunctions
    void setRadius(int radius) {
  this->radius=radius;
    }
    double getRadius(){
        return radius;
    }

};

class utility {
public: 
double calculateArea(Circle c){
    int r = c.getRadius();
    return 3.14 * r * r;
}
};

int main (){
    // input statements 
    int radius = 0;
    cout<<"enter the radius in (cm) "<<endl;
    cin>>radius;

    Circle obj (radius);
    utility c1;
    cout<<"Circle Area= "<<c1.calculateArea(obj)<<endl;
    return 0;
}