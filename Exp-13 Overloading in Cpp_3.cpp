// Papri Sen
// 24070123070
// A3

#include <iostream>
using namespace std;
class Shapes{
public:
    double area(double s,int){
        double Area_S = s*s;
        return Area_S;
    }
    double area(double r){
        double Area_C = 3.14*r*r;
        return Area_C;
    }
    double area(double l, double b){
        double Area_R = l*b;
        return Area_R;
    }
    double area(double b, double h,int){
        double Area_T = 0.5*b*h;
        return Area_T;
    }
};
int main() {
    Shapes a,b,c,d;
    cout << "Area of Sq: "<<a.area(3.3,0)<<endl;
    cout << "Area of Circle: "<<b.area(3.3)<<endl;
    cout << "Area of Rectangle: "<<c.area(1.2,2.2)<<endl;
    cout << "Area of Triangle: "<<d.area(10,3.3,0)<<endl;
    return 0;
}
/*
Output:
Area of Sq: 10.89
Area of Circle: 34.1946
Area of Rectangle: 2.64
Area of Triangle: 16.5
*/
