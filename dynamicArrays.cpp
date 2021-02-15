#include <iostream>

using namespace std;

typedef int* IntPtr;

int main () {
  IntPtr p1;
  int size;

  cout <<"Enter the size: ";
  cin >> size;
  p1 = new int[size]; //Create a dynamic array
  const int MIN = 1;
  const int MAX = 5;

  cout <<"Enter the integers: " << MIN << "," << MAX << "]:" << endl;
  for (int i = 0; i < size; i++)
  {
      cin >> p1[i]; //same as => cin >> *(p1+i)
  }
  //loop for each value
  for (int i = MIN; i <= MAX; i++)
  {
      int valuecount = 0;
      for (int j = 0; j < size; j++)
      {
          if (p1[j]==i)
          {
              valuecount++;
          }
          
      }
      if (valuecount > 0)   {
          cout << i << " -> " << valuecount;
          if (valuecount == 1) {
              cout << " time" << endl;
          } else {
              cout << " times" << endl;
          }
          
          
      }
      
      
     
  }
  

  

  delete [] p1; //delete the entire array


  return 0;
}