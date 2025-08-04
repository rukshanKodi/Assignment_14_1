#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
private:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle();
    Vehicle(string manu, int year);

    void setManufacturer(string manu);
    void setYearBuilt(int year);
    string getManufacturer() const;
    int getYearBuilt() const;

    virtual void displayInfo() const;
};

#endif