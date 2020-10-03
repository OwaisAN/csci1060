#include <iostream>

using namespace std;

int main() {
//some variable for the example
int x = 2;
int y = 8;
bool temp = true;

if (x < y) {
    cout << "x is less than y";
    if (x) {
        cout << "(x is also true)";
    }
    cout << endl;
} else if (x > y) {
    cout << "x is greater than y" << endl;
} else {
    cout << "x is equal to y" << endl;
}
    return 0;
}