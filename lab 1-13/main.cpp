#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 13" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = sqrt(pow(x, 5) + 1.7) + cos(pow(x, 3)) + log(pow(x, 4)) + sin(pi * x);
    cout << "y = " << y;
    return 0;
}