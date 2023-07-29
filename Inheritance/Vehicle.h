//Anthony Heffernan
// 7/25/2023
// CIS.1202.5T1

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>

class Vehicle {       //base vehicle class for all vehicles

private:
	std::string manufacturer;   // parameters for base features
	int yearBuilt;

public:
	Vehicle(const std::string& manufacturer, int yearBuilt);    //get base information for all vehicles with getters and 
	std::string getManufacturer();                              //setters for manufacturer and year of manufacturer
	void setManufacturer(const std::string& manufacturer);
	int getYearBuilt();
	void setYearBuilt(int yearBuilt);
	virtual void displayInfo();                    //information gained on the vehicle
};
#endif 