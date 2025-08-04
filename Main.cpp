#include <iostream>
#include "Vehicle.h"
//#include "Car.h"
//#include "Truck.h"
using namespace std;

int main() {

        string manufacturer;
    int year, doors, towCap;

    
    cout << "Vehicle:Enter manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> year;
    cin.ignore();

    Vehicle v(manufacturer, year);
    cout << endl;
    v.displayInfo();
}