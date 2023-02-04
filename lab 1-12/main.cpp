#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 12" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = log(fabs(5 * x + 3)) + cos(pi * pow(x, 2)) + tan(pow(x, 3));
    cout << "y = " << y;
    return 0;
}