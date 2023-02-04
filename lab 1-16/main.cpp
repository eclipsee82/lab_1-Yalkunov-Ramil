#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 16" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = sin(5 * x) + sqrt(7 + fabs(3 - x));
    cout << "y = " << y;
    return 0;
}