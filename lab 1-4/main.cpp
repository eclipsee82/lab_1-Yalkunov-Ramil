#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 4" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = cos(5 * x) + sqrt(pi + fabs(2 - x));
    cout << "y = " << y;
    return 0;
}