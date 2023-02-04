#include "iostream"
#include "math.h"

using namespace std;
int main(){
    float x, y;
    cout << "Lab1 - 1" << endl;
    cout << "Enter a value for x: ";
    cin >> x;
    y = sqrt(pow(2.8, 2 * x)) - fabs(sin((3.14*x)/ x + (2/3))) + 1.7;
    cout << "y = " << y;
    return 0;
}