#include <iostream>

using namespace std;

typedef int* ArrayPtr;

int main() {
  //Create a 2D array by first creating an array of int pointers
  //and then creating an array of ints for each of the int pointers
  ArrayPtr *p1 = new ArrayPtr[5];
  //above without typedef => int **p1 = new int*[5];

  for (int i = 0; i < 5; i++) {
    p1[i] = new int[3];
  }

  //initialize array values and display as grid
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      p1[i][j] = i*j;
      cout << p1[i][j] << " ";
    }
    cout << endl;
  }

  //delete 2d dynamic array
  for (int i=0; i < 5; i++) {
    delete [] p1[i];
  }
  delete [] p1;
  return 0;
}