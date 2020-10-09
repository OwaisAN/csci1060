#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int writeString(string a);

int main() {
    string word;
    cout << "Enter a string: ";
    cin >> word;

    writeString(word);
    

  return 0;
}

//puts the parameter string into the file
int writingString(string a) {
    ofstream myOutput;
    myOutput.open("user.txt");
    myOutput << a << endl;

    myOutput.close();
    return 0;

}