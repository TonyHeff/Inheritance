#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(const std::string& manufacturer, int yearBuilt)    //getters and setters for base vehicle features
    : manufacturer(manufacturer), yearBuilt(yearBuilt){}

std::string Vehicle::getManufacturer() {
    return manufacturer;
}

void Vehicle::setManufacturer(const std::string& manufacturer) {
    this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt() {    
    return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo() {     //display the info of the vehicle when called
    std::cout << "Manufacturer: " << manufacturer << std::endl;
    std::cout << "Year Built: " << yearBuilt << std::endl;
}

