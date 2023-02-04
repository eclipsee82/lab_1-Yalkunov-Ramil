#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y, e, pi;
    e = 2.18;
    pi = 3.14;
    cout << "Lab 1 - 9" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = sqrt(pow(e, 3 * x) + 7) + cos(pow(x, 5)) + log(fabs((3 * x) + 7));
    cout << "y = " << y;
    return 0;
}