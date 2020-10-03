#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float appleCost = 0.60;
    float squashCost = 0.95;
    float totalCost = 0;
    int NumApples;
    int NumSquash;
    string name; 

    cout << fixed << setprecision(2);
    cout << "Name: ";
    cin >> name;
    cout << "How many apples? ";
    cin >> NumApples;
    cout << "How many squash? ";
    cin >> NumSquash;

    totalCost = (NumApples * appleCost) + (NumSquash * squashCost);

    cout << name << " has purchased " << NumApples << " apples, and " << NumSquash << "squashes." << endl;
    cout << "Total bill: " << totalCost;


    return 0;
}
