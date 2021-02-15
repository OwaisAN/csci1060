#include <iostream>

using namespace std;

//define our own type!
typedef int* IntPtr; //this means we can use IntPtr to declare an integer
                     //pointer variable

void myFunction(IntPtr p2);

int main() {
  IntPtr p1; //pointer to an integer
           //(called a pointer variable)
  int t = 20; //an automatic variable of type integer
              //(also called an ordinary variable)


  //point p1 to t's address
  p1 = &t;

  myFunction(p1);

  //display value and addres of the ordinary variable t
  //\t means tab (similar to \n which means newline)
  cout << "value: t = " << t << "\t"
       << "address: &t = " << &t << endl;

  //display value and address of pointer variable
  cout << "value: *p1 = " << *p1 << "\t"
       << "address: p1 = " << p1 << endl;


  return 0;
}

void myFunction(IntPtr p2) {
  *p2 = 10;

  int x = 5;
  p2 = &x;

  cout << "value: x = " << x << "\t"
       << "address: &x = " << &x << endl;
  cout << "value: *p2 = " << *p2 << "\t"
       << "address: p2 = " << p2 << endl;



}