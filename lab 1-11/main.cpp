#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 11" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = tan(sin(pi * x)) + pow(x, 7) + sqrt(pow(e, 2 * x + 3));
    cout << "y = " << y;
    return 0;
}