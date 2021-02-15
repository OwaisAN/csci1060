//sorting 1000 numbers: 0m0.100s
// sorting 10,000 numbers: 0m1.125s
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int sortNums(int nums[], int sizes);
int swapper(int& a, int& b);
int genRandom(int max); //random number generator

int main() { 
    int size = 10000;
    int num[size];
    srand(time(NULL));
    
    
    for (int i = 0; i < size; i++)
    {
        int randomNum = genRandom(100);
        num[i] = randomNum;
        
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

int genRandom(int max) {
    //srand(time(NULL)); was being looped in the for loop so i just add it to main
    return (rand()%max + 1);
}
