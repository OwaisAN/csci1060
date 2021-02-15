#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int printMonth(int month, int year);
int printYear(int year);

int main() {
    string a;
    cout << "year calender or month calender(year/month):" << endl;
    cin >> a;
    //year is needed regardless
    int year;
    cout << "enter year:" << endl;
    cin >> year;
    
    if (a == "year")
    {   
        printYear(year);
        
    } else if (a == "month")
    {
        int month;
        cout << "enter month:" << endl;
        cin >> month;
        printMonth(month, year);
        
    } else
    {
        cout << " invalid input" << endl;
    }
    
    
    
    
    return 0;
}

//this function should print the calender for every month in the given year
int printYear(int year) {
    for (int i = 1 ; i <= 12; i++)
        {
            printMonth(i, year);
        }
    return 0;
}

//this function should print the calender for the given month
int printMonth(int month, int year) {
    string monthname[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    

    //code below determines the first day of the given month
    int monthkey[12] = {1,4,4,0,2,5,0,3,6,1,4,6};
    int weekday = ((year%100)/4) + monthkey[month - 1];
   
    if (year/100 == 19)
    {
        weekday += 0;
    } else if (year/100 == 20)
    {
        weekday += 6;
    } else if (year/100 == 17)
    {
        weekday += 4;
    } else if (year/100 == 18)
    {
        weekday += 2;
    } 
    weekday += year%100;
    weekday = weekday%7;
    

    //code to print out the calender
    //if this code was complete I think it the program would be complete
    cout << monthname[month - 1] << " " << year << endl;
    cout << "First day of the month: " << weekday << endl;


   


    return 0;
}

