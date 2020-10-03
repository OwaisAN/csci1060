#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string firstname;
    string lastname;
    int birthYear;
    int currentYear = 2020;
    float hourlyWage;

    cout << fixed << setprecision(2);
    cout << "First Name: ";
    cin >> firstname;
    cout << "Last name: ";
    cin >> lastname;
    cout << "Birth Year: ";
    cin >> birthYear;
    cout << "Hourly Wage: ";
    cin >> hourlyWage;
    int age = currentYear - birthYear;

    cout << firstname << " " << lastname << " is " << age << " years old and requests an hourly wage of $" << hourlyWage << "." << endl;

    return 0;

}