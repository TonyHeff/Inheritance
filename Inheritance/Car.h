#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"    //include base class features

class Car : public Vehicle {    //getters and setters for car features not in vehicle.h
private:
	int numDoors;

public:
	Car(const std::string& manufacturer, int yearBuilt, int numDoors);
	int getNumDoors();      //getters and setters for car doors
	void setNumDoors(int numDoors);
	void displayInfo();   //display features of cars gathered by user input
};

#endif
