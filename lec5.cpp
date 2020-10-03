#include <iostream>
#include <cmath>


using namespace std;
int main() {
    //using predefined functions in math
    float result = sqrt(5);

    cout << " sqrt(5) = " << result << endl;
    cout << "2^3 = " << pow(2,3) << endl;

    float base;
    float exponent;
    cout << "base = ";
    cin >> base;
    cout << "exponent = ";
    cin >> exponent;

    float power = 1;

    for (int i=0; i < exponent; i++) {
        power *= base;
    }


    cout << base << "^" << exponent << " = " << power << endl;


    return 0;
}