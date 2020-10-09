#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    
    int min = 2;
    int max = 5;
    
    srand(time(NULL));
    cout << (min + rand()%max - min+1) << endl;
    

    return 0;
}

