#include <iostream>

using namespace std;
/*
int main () {
    long sum = 0;
    int range = 20000000;
    
    for (int i = 0; i <= range; i += 2) {
        sum += i; 
    }
    /*
   int count = range;
   while (count > 0) {
       sum +=  count;
       count -= 2;
   }
   

    
    cout << "sum of even number [0," << range << "] = " << sum << endl;

    return 0;

}
*/

int main() {
    int x = 10000000;
    int y = 63;

    while (x%y != 0) {
        cout << x << "is not divisble by" << y << endl;
        x--;
    }
    cout << x << " is divisible by" << y << endl;

    return 0;
}