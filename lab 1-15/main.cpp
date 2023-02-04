#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 15" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = tan(1/3) * x + fabs(2 * x + 5) + 2.8;
    cout << "y = " << y;
    return 0;
}