#include <iostream>
#include <string>

using namespace std;

class Product {
    string name;
    int price;
    int weight;
public:
    Product(); // default constructor
    Product(string , int , int ); //constructor
    ~Product(); // destructor
    void set_values(string, int, int); //mutator
    string getName() {return name;}
    int getPrice() { return price;}
    int getWeight() {return weight;}
    int getShippingCost() {return weight*10;} //accessor
    int getTax() {return price*0.13;} //accessor
    string toString(); 
    int getTotalCost();
    friend bool operator==(Product left, Product right); // overloaded operator function
    friend bool operator<(Product left, Product right); // overloaded operator function
};

// overloaded operator
bool operator<(Product left, Product right) {
    return (left.getTotalCost() < right.getTotalCost());
}
bool operator==(Product left, Product right) {
    return ((left.name == right.name)
            && (left.price == left.price)
            && (left.weight == right.weight));
}
Product::Product() {
    name = "unknown";
    price = -1;//-1 means undefined
    weight = -1;
}

Product::Product(string s, int x, int y) {
    name = s;
    price = x;
    weight = y;

}

Product::~Product() {
    cout <<"Destructor called!" << endl;
}
void Product::set_values(string s, int x, int y) {
    name = s;
    price = x;
    weight = y;
}

int Product::getTotalCost() {
    return price + getTax() + getShippingCost();
}
// toString function that returns a string containing the contents of the class
string Product::toString() {
     string pstring = "Name: " + name + "\nPrice: " + to_string(price) +
                      "\nWeight: " + to_string(weight) + "\nTax: " + to_string(getTax()) +
                      "\nShipping: " + to_string(getShippingCost()) + "\nTotal cost: " + 
                      to_string(getTotalCost()) + "\n" ;       
    return pstring;             
}
int main() {
    Product mousePad("Mouse Pad", 34, 1);
    cout << mousePad.toString() << endl;

    Product *p1 = new Product();
    p1->set_values("cpu cooler", 49, 2);
    cout << p1->toString() << endl;

    if (*p1 == mousePad) {
        cout << p1->getName() << " and "
             << mousePad.getName() << " are the same product." << endl;
    } else {
        cout << p1->getName() << " and "
             << mousePad.getName() << " are not the same product." << endl;
    }

    if (*p1 < mousePad) {
        cout << p1->getName() <<" is cheaper than "
             << mousePad.getName() << "." << endl;
    } else {
        cout << p1->getName() <<" is not cheaper than "
             << mousePad.getName() << "." << endl;
    }

    delete p1;

    return 0;
}