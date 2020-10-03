#include <iostream>
 
using namespace std;

//declared functions
int valueSquared(int a);
int refSquared(int &a);


int main() {
    int num = 1;
    int numsquared = 1;
    int a_squared;

    cout << "Enter a number to be squared: ";
    cin >> num;

    cout << "Address of num = " << &num << endl;
    cout << "Address of numsquared = " << &numsquared << endl;

    cout << "CAll by value example:" << endl;
    numsquared = valueSquared(num);
    cout << "the square of " << num << " is " << numsquared << "." << endl;

    cout << "CAll by refernce example:" << endl;
    numsquared = refSquared(num);
    cout << "the square of " << num << " is " << numsquared << "." << endl;


    return 0;

}

int valueSquared(int a) {
    cout << "Address of call by value a = " << &a << endl;
    a = a * a;
    return a;
}
int refSquared(const int &a) {
    cout << "Address of call by reference a = " << &a << endl;
    a_squared = a * a;
    return a_squared;
}
