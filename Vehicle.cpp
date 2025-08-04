#include "Vehicle.h"
#include <iostream>
using namespace std;


Vehicle::Vehicle() : manufacturer(""), yearBuilt(0) {}

Vehicle::Vehicle(string manu, int year) : manufacturer(manu), yearBuilt(year) {}

void Vehicle::setManufacturer(string manu) { manufacturer = manu; }
void Vehicle::setYearBuilt(int year) { yearBuilt = year; }
string Vehicle::getManufacturer() const { return manufacturer; }
int Vehicle::getYearBuilt() const { return yearBuilt; }

void Vehicle::displayInfo() const {
    cout << "Vehicle Information:" << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << yearBuilt << endl;
}