/* The purpose of the program is to display a graph showing production of units
in thousands for each factory*/
/* expected output:
factory #1: *
factory #2: ***
factory #3: *****
*/



#include <iostream>
#include <cmath>

using namespace std;
const int kNumOfFactories = 3;

void ProductionData(int array_of_factories[], int len_array);
void UnitsInThousands(int array_of_factories[], int len_array);
void UnitsGraph(const int array_factories[], int len_array);
void UnitsInput(int& sum);
int RoundNumber(double number); 
void PrintNstars(int n);

int main( ) {

    int production[kNumOfFactories];
    cout << "This program displays a graph showing\n" << "production for each factory in the company.\n";

    ProductionData(production, kNumOfFactories);
    UnitsInThousands(production, kNumOfFactories);
    UnitsGraph(production, kNumOfFactories);
    
    return 0;
}

//calls function D for each element in the array 
void ProductionData(int array_of_factories[], int len_array) {

    for (int i = 1;i <= len_array; i++){

        cout << endl << "Enter production data for plant number " << i << endl;
        UnitsInput(array_of_factories[i - 1]);
    }
}

//takes input of units, prints total and assigns it to the current element in the array
void UnitsInput(int& sum) {

    cout << "Enter number of units produced by each department.\n" << "Append a negative number to the end of the list.\n";
    sum = 0; int next;
    cin >> next;

    while (next >= 0) {
    sum = sum + next;
    cin >> next;
    } 

    cout << "Total = " << sum << endl;
}

// takes a number from the array and divides it by 1000
//calls RoundNumber
void UnitsInThousands(int array_of_factories[], int len_array) {

    for (int i = 0; i < len_array; i++) {
        array_of_factories[i] = RoundNumber(array_of_factories[i]/1000.0);
    }
}   

//rounds the number to the nearest integer
int RoundNumber(double number) {
    return static_cast<int>(floor(number + 0.5));
}

//prints number of units produces in thousands for each factory
void UnitsGraph(const int array_factories[], int len_array) {

    cout << "\nUnits produced in thousands of units:\n";

    for (int i = 1; i <= len_array; i++) {

        cout << "Factory #" << i << " ";
        PrintNstars(array_factories[i - 1]);
        cout << endl;
    }
}

//prints n number of *
void PrintNstars(int n) {
    for (int count = 1; count <= n; count++) {
        cout << "*";
    }
}
