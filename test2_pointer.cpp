#include <iostream> 


using namespace std;

int main(){

    int myInt = 23;
    int *myPointer = &myInt;

    cout << "myInt value: "<< myInt << "    myInt address: " << &myInt << endl;
    cout << "myPointer value: "<< *myPointer << "   myPointer address: " << myPointer << endl;



    return 0;
}