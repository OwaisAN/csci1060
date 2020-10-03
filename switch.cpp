#include <iostream>

using namespace std;

int main() {
    char grade;
    cout << "Enter your lab grade: ";
    cin >> grade;
    
    switch (grade) {
        case 'A':
            cout << "Awesome Job!!" << endl;
            break;
        case 'B':
            cout <<"Good Work!" << endl;
            break;
        case 'C':
            cout << "Keep it up!" << endl;
            break;
        case 'F':
            cout << "Please schedule an apointment with your professor." << endl;
            break;
        default:
            cout << "Invalid grade. Try again." << endl;
    }
    return 0;
}