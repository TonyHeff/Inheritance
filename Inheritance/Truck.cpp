#include "Truck.h"
#include <iostream>

Truck::Truck( const std::string& manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}  

int Truck::getTowingCapacity() {  //getters and setters for towing capacity
    return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

void Truck::displayInfo() {
    Vehicle::displayInfo();     //display vehicle info with additional parameter of towing capacity
    std::cout << "Towing Capacity: " << towingCapacity << "lbs" << std::endl;
}