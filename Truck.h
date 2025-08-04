#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck();
    Truck(string manu, int year, int towCap);

    void setTowingCapacity(int cap);
    int getTowingCapacity() const;

    void displayInfo() const override;
};

#endif
