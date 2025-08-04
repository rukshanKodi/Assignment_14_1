#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main()
{

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

    cout << "\nCar:Enter manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> year;
    cout << "Enter number of doors: ";
    cin >> doors;
    cin.ignore();

    Car c(manufacturer, year, doors);
    cout << endl;
    c.displayInfo();

    cout << "\nTruck:Enter manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter year built: ";
    cin >> year;
    cout << "Enter towing capacity: ";
    cin >> towCap;

    Truck t(manufacturer, year, towCap);
    cout << endl;
    t.displayInfo();

    cin.ignore();
    cout << "\nPress Enter to exit...";
    cin.get();

       return 0;
}