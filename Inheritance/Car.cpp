#include "Car.h"
#include <iostream>

Car::Car( const std::string& manufacturer, int yearBuilt, int numDoors)
    :Vehicle( manufacturer, yearBuilt), numDoors(numDoors) {}

int Car::getNumDoors() {
    return numDoors;    //return number of doors from user input
}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

void Car::displayInfo() {    
    Vehicle::displayInfo();
    std::cout << "Number of Doors: " << numDoors << std::endl;
}