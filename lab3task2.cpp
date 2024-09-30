#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    //x
    double x;

    //input
    cout << "Enter x: ";
    cin >> x;

    //calc1
    double ch1 = log(x) + 2 * x;         // ln(x) + 2x
    double zn1 = x * x + 1;            // x^2 + 1
    double fraction1 = ch1 / zn1;  // (ln(x) + 2x) / (x^2 + 1)
    
    //calc2
    double ch2 = x + 1;                  // x + 1
    double zn2 = 2 * x * x + 1;        // 2x^2 + 1
    double fraction2 = ch2 / zn2;  // (x + 1) / (2x^2 + 1)

    //calc3
    double y = fraction1 + fraction2;

    //output
    cout << "y = " << y << endl;

    return 0;
}
