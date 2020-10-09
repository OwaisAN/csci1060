#include <iostream>

using namespace std;

int sortNums(int nums[], int sizes);

int main() {
    int num[] = {60,40,30,20,50,10};
    int size = sizeof(num)/sizeof(num[0]);

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
  for (int index = 1; index < sizes; index++)
  {
    int value = nums[index];
    int i = index - 1;

    while (i >= 0)
    {
      if (value < nums[i])
      {
        nums[i+1] = nums[i];
        nums[i] = value;
        i = i-1;
      }
      else
      {
        break;
      }
      
      
    }
    
  }
  return 0;
}
