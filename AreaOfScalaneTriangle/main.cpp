#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout << "Calc to find \"Perimeter of Scalane triangle:\" \n";
    double a; cout << "a: "; cin >> a; cout << endl;
    double b; cout << "b: "; cin >> b; cout << endl;
    double c; cout << "c: "; cin >> c; cout << endl;
    double s; s = (a+b+c)/2;
    double A; A = sqrt(s*(s-a)*(s-b)*(s-c));
    if (a+b == c || a+b < c || a + c < b || b + c < a){
        cout << "The sum of two side lengths has to exceed the length of the third side.";
        return 0;
    } else {
        cout << "Area: " << A;
    }
     
    return 0;
}