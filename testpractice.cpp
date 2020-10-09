#include <iostream> //library for terminal input and output
#include <string> //library for strings
#include <fstream> //library for file input and output

using namespace std;

int main() {
  string filename = "user.txt";
  const int SIZE = 1;
  //Our first array of 5 strings
  string data[SIZE];

  //FILE OUTPUT

  //Open an output filestream
  //ofstream myOutput; //similar to cout but for files
  //myOutput.open(filename);
  //the above two lines are same as the next line
  ofstream myOutput(filename);

  //get words to write to file
  
  cin >> data[SIZE];

  //write words to file in reverse order
  
  myOutput << data[SIZE] << endl;
 

  //close an output filestream
  myOutput.close();



  return 0;
}