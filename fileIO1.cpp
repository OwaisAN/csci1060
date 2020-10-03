#include <iostream>
#include <string> // library for strings
#include <fstream> // library for file IO

using namespace std;

int main() {
    string filename;
    const int SIZE  = 5;
    string data[SIZE];

    //open an output filestram
    cout << "enter a file name: ";
    cin >> filename;
    //ofstream myOutput; // similar to cout but for files
    //myOutput.open(filename);
    //  THE ABOVE TWO LINES ARE SAME AS THE NEXT LINE
    ofstream myOutput(filename);

    cout << "Enter " << SIZE << " words to store in reverse order (in file " 
        << filename << "):";

    for (int i = 0; i < SIZE; i++)
    {
        cin >> data[i];
    }
    
    //write words to file in reverse order
    for (int i = SIZE-1; i >= 0; i--)
    {
        myOutput << data[i] << endl;
    }
    

    //close an output filestram
    myOutput.close();


    //FILE INPUT
    cout << "reading in " << filename << "..." << endl;
    
    //open input filestream
    ifstream myInput(filename);

    //read contents of file and display to termainal
    
    while (!myInput.eof()) {
        string line;
        myInput >> line;
        cout << line << endl;
    }

    //close the file
    myInput.close();

    return 0;
}