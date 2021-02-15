#include <iostream>

using namespace std;

//define our own type!
typedef int* IntPtr; //this means we can use IntPtr to declare an integer
                     //pointer variable

int main() {
  int *p1; //pointer to an integer
           //(called a pointer variable)
  int t = 20; //an automatic variable of type integer
              //(also called an ordinary variable)
  //With our type def we can now replace
  //int *p2;
  //with...
  IntPtr p2;


  //point p1 to t's address
  p1 = &t;
  p2 = p1;

  //display value and addres of the ordinary variable t
  //\t means tab (similar to \n which means newline)
  cout << "value: t = " << t << "\t"
       << "address: &t = " << &t << endl;

  //display value and address of pointer variable
  cout << "value: *p1 = " << *p1 << "\t"
       << "address: p1 = " << p1 << endl;

  //display value and address of pointer variable
  cout << "value: *p2 = " << *p2 << "\t"
       << "address: p2 = " << p2 << endl;


  /* REMEMBER:
              VALUE     ADDRESS
  int t;        t        &t
  int *p1;     *p1       p1

  */

  return 0;
}


d3counter = 0;
  for (int c = 0;  c < COLS ; c++){
    for (int r = 0, x = c ; r < ROWS, x < COLS ; r++,x++)
    {
      if (board[r][x] == currTile)
    {
      d3counter++;
      cout << r << " " << x << endl;
      cout << "count increasind to " << d3counter << endl;
      if (d3counter == 4)
      {
        return true;
      }
      
    } else {
      d3counter = 0;
      cout << r << " " << x << endl;
      cout << "count resseting to " << d3counter << endl;
    }
    }
  }