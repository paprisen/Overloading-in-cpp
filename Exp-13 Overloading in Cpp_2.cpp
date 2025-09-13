// Papri Sen
// 24070123070
// A3

#include<iostream>
#include <cmath>
using namespace std;

class Interest{
    public:

    Interest(int p, int r, int n){
        double amt=(p*r*n)/100;
        cout<<"Simple Interest is: "<<amt<<endl;
    }

    Interest(double p, double r, int n){
        double amt=p*pow((1 + (r/100)), n) - p;
        cout<<"Compound Interest is: "<<amt<<endl;
    }
};

    int main(){

        Interest i1(20000.123, 3.5, 2);

        return 0;
    }
/*
Output:
Compound Interest is: 1424.51
*/
