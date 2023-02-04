#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 8" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = sqrt(pow(x, 3) + 4) + sin(pow(x, 4)) + tan(pow(x, 3));
    cout << "y = " << y;
    return 0;
}