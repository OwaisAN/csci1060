#include <iostream>
#include <ctime>
#include <cstdlib>



using namespace std;
int main() {

    
    int count = 0;

    cout << "How many random numbers do you need? " << endl;
    cin >> count;

//seed the sudo random number generator
srand(time(NULL));

//generate random numbers using rand() from cstdlib
    for (int i=0; i < count; i++) {
        cout << "rand() = " << (100000000 + rand()%1000000) << endl;


    }

    return 0;
}