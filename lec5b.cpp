#include <iostream>
#include <string>

using namespace std;

//declare functions before main
void hello(string fname);
void hello(string fname, char linit);


int main() {

    //Fahad
    //Jaelen
    //Reese
    //Megan
hello("Fahad");
hello("Jaelen");

char finit = 'M';
hello(string(1, finit));

    return 0;
}

//define functions here
void hello(string fname) {
    cout << "Hello " << fname <<", welcome to class!"<< endl;
}

void hello(string fname, char linit) {
    cout << "Hi " << fname << " " << linit << endl;
}