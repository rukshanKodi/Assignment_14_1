#include "Car.h"
#include <iostream>
using namespace std;

Car::Car() : Vehicle(), numDoors(0) {}
Car::Car(string manu, int year, int doors) : Vehicle(manu, year), numDoors(doors) {}

void Car::setNumDoors(int doors) { numDoors = doors; }
int Car::getNumDoors() const { return numDoors; }

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Doors: " << numDoors << endl;
}