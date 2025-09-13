// Papri Sen
// 24070123070
// A3

#include<iostream>
#include<string>
using namespace std;

class Concat{
    public:

    string Concatenate(string a, string b){
        return a+b;
    }

    string Concatenate(char a, char b){
        string init = "";
        init += a;
        init += b;
        return init;
    }
};

    int main(){

        Concat c;
        
        cout<<"Concatenated String is: "<<c.Concatenate("Papri", "Sen")<<endl;
        cout<<"Concatenated Characters are: "<<c.Concatenate("P", "S")<<endl;

        return 0;
    }

/*
Output:
Concatenated String is: PapriSen
Concatenated Characters are: PS
*/
