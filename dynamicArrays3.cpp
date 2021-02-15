#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

typedef int* IntPtr;

//int[] createRandomArray(int size):
//not allowed, array cant be returned by a function

IntPtr createRandomArray(int size); //legal in C++

int main () {

    
    int size;
    cout << "Enter array size: ";
    cin >> size;

    IntPtr p1 = createRandomArray(size);

    for (int i = 0; i < size; i++)
    {
        cout << "p1[" << i << "] = " << p1[i] << endl;
    }

    delete [] p1; //delete the entire array
    return 0;
}

IntPtr createRandomArray(int size) {
    // IntPtr *temp = new IntPtr[size];
    // srand(time(NULL));
    // for (int i = 0; i < size; i++){
    //     temp[i] = new int[size];
    // }
    // for (int i = 0; i < size; i++){
    //     for (int j = 0; j < size; j++){
    //         temp[i][j] = rand()%101;
    //     }
        
    // }
    
    
    IntPtr temp = new int[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        temp[i] = rand()%101;
    }
    return temp;
}