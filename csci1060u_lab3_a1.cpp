#include <iostream>


using namespace std;

int sortNums(int nums[], int sizes);
int swapper(int& a, int& b);

int main() { 
    int size = 5;
    int num[size];
    cout <<"Enter " << size <<" integers: " << endl;
    
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    //array before function
    cout << "before:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << ", ";
    }
    cout  << endl;

    sortNums(num, size);
  
    //after function
    cout << "after: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << ", ";
    }
    cout  << endl;
  

    return 0;
}

int sortNums(int nums[], int sizes) {
    //function
  for (int i = 0; i < sizes; i++)
  {
      for (int j = 0; j < sizes; j++)
      {
          if (nums[j] > nums[i])
          {
              swapper(nums[j], nums[i]);
          }
          
      }
      
  }
  return 0;
}

int swapper(int& a, int& b) {
  int z;
  z = a;
  a = b;
  b = z;

  return 0;
}

