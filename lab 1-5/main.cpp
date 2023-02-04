#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 5" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = pow(x, 5) + log(sqrt(pi + fabs(5 - x)));
    cout << "y = " << y;
    return 0;
}