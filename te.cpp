#include <iostream>
#include <string>

using namespace std;

typedef int* IntPtr;

void myfunction(IntPtr p2);

int main() {
    IntPtr p1;
    int t =20;
    p1 = &t;
    myfunction(p1);
    cout << "value: *p1 = " << *p1 << "\t"
         << "address: p1 = " << p1 << endl;
    cout << "value: t = " << t << "\t"
         << "address: &t = " << &t << endl;
    return 0;
}

void myfunction(IntPtr p2) {
    *p2 = 10;
    int x = 5;
    p2 = &x;
    cout << "value: *p2 = " << *p2 << "\t"
         << "address: p2 = " << p2 << endl;
    cout << "value: t = " << x << "\t"
         << "address: &t = " << &x << endl;

}