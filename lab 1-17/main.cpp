#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 17" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = pow(x, 3) + log(sqrt(pi + fabs( 5 + (2 * x))));
    cout << "y = " << y;
    return 0;
}