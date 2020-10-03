#include <iostream>

using namespace std;

int main() {
    int x;
    int y;
    int z;

    cout <<"Enter two integers:";
    cin >> x >> y;


    cout <<"x = " << x <<" y = " << y << endl;
    cout <<"swapping..." << endl;

    //swapping x and y using z
    /* z = x;
    x = y
    y = z; */

    // swapping x and y without using z
    x = x + y;
    y = x - y;
    x = x - y;


    
    cout <<"x = " << x <<" y = " << y << endl; //not really right since ur not switching the values of the variable



    return 0;
}