#include <iostream>

using namespace std;

typedef int* IntPtr;

int main () {
  int x = 45; //an ordinary (or automatic) variable
              //that is allocated memory at the start of the main function
              //and is destroyed at the end of the main function

  IntPtr p1; //same as int *p1
  p1 = new int; //create a dynamic variable

  *p1 = 50;

  cout << "*p1 value = " << *p1 << "\t"
       << "p1 address = " << p1 << endl;

  delete p1; //destroy the dynamic variable
  cout << "p1 deleted " << endl;

  IntPtr p2 = new int;
  IntPtr p3 = new int;

  *p2 = 20;
  *p3 = 30;

  cout << "*p2 value = " << *p2 << "\t"
       << "p2 address = " << p2 << endl;
  cout << "*p3 value = " << *p3 << "\t"
       << "p3 address = " << p3 << endl;

  p1 = new int;
  *p1 = 60;
  cout << "*p1 value = " << *p1 << "\t"
       << "p1 address = " << p1 << endl;

  delete p1;
  delete p2;
  delete p3;

  return 0;
}