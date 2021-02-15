#include <iostream>
#include <string>

using namespace std;

//Acomposite structure for a person
struct person {
    string firstname;
    string lastname;
    int age;
    bool employed;
};

person* createperson(string f, string l, int a, bool e);

int main() {
    //create an automatice (ordinary) person variable
    person p;

    p.firstname = "cookie";
    p.lastname = "monster";
    p.age = 42;
    p.employed = true;

    cout << p.firstname << " " << p.lastname
         << " is a " << p.age << " year old." << endl;

    //create a dynamic person variable
    person *p2 = new person;

    (*p2).firstname = "big";//there is a better way to do this
    p2->lastname = "bird";
    p2-> age = 89;
    p2->employed = false;

    cout << p2->firstname << " " << p2->lastname
         << " is a " << p2->age << " year old." << endl;

    delete p2;

    p2 = createperson("ernie", "lnu", 36,true);
    cout << p2->firstname << " " << p2->lastname
         << " is a " << p2->age << " year old." << endl;
        delete p2;
    return 0;
}

person* createperson(string f, string l, int a, bool e) {
    person *temp = new person;
    temp->firstname = f;
    temp->lastname = l;
    temp->age = a;
    temp->employed = e;
    return temp;
    
}