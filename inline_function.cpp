#include <iostream>
using namespace std;
//inline to declare the function
inline double inline_max(double x, double y) { //inline datatype name(arguments)
    return (x > y) ? x:y;
}
inline double inline_min(double x, double y) {
    return (x < y) ? x:y;  //if x < y return x else return y
}
//the compiler adds the code in the function before its used for smaller compile time, however this makes the code longer
int main(){
    double a=16,b=7;
    cout << "The values: " << a << "," << b << endl;
    cout << "The bigger is " << inline_max(a,b); //standard function usage
    return 0;
}