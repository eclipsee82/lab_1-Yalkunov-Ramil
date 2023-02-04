#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 2" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = log(fabs(x - 1.5)) + sqrt(pow(x, 4)) + sqrt(pow(e, 3 * x) + 4);
    cout << "y = " << y;
    return 0;
}