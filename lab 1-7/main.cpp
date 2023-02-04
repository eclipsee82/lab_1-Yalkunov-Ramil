#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 7" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = 6 * x + pow(x, 3) * log(pow(x, 2));
    cout << "y = " << y;
    return 0;
}