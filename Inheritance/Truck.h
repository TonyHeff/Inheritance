#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"  //include base vehicle features from vehicle class

class Truck : public Vehicle {
private:
	int towingCapacity;  

public:
	Truck(const std::string& manufacturer, int yearBuilt, int towingCapacity);
	int getTowingCapacity();
	void setTowingCapacity(int towingCapacity);
	void displayInfo();
};

#endif