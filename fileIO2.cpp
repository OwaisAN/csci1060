#include <iostream> //library for terminal input and output
#include <string> //library for strings
#include <fstream> //library for file input and output

using namespace std;

int main() {
  string filename;
  const int SIZE = 5;
  //Our first array of 5 strings
  string data[SIZE];

  //FILE OUTPUT

  //Open an output filestream
  cout << "Enter a filename: ";
  cin >> filename;
  //ofstream myOutput; //similar to cout but for files
  //myOutput.open(filename);
  //the above two lines are same as the next line
  ofstream myOutput(filename, ios::app); //to open a file to append text to  end of file
                              //instead of write over file use ios::app
  //get words to write to file
  cout << "Enter " << SIZE << " words to store in reverse order (in file"
       << filename << "):";
  for (int i = 0; i < SIZE; i++) {
      cin >> data[i];
  }

  //write words to file in reverse order
  for (int i = SIZE-1; i >= 0; i--) {
    myOutput << data[i] << endl;
  }

  //close an output filestream
  myOutput.close();

  //FILE INPUT
  cout << "Reading in " << filename << "..." << endl;

  //Open input file stream
  ifstream myInput(filename);

  //Read contents of file and display to terminal
  while(!myInput.eof()) {
    string line;
    myInput >> line;
    cout << line << endl;
  }

  //Close the files
  myInput.close();

  return 0;
}