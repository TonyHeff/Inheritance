#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <string>

using namespace std;

int main() {                                       //main program for getting user input for vehicle paramters
	string manufacturer; 
	int yearBuilt, numDoors, towingCapacity;

	cout << "Enter the vehicle manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cin.ignore();      //ignore newline characters that cause a lot of issues

	Vehicle vehicle(manufacturer, yearBuilt);
	cout << "Vehicle Information:\n";
	vehicle.displayInfo();

	cout << "\nEnter the car's manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cout << "Enter the number of doors: ";
	cin >> numDoors;
	cin.ignore();      

	Car car(manufacturer, yearBuilt, numDoors);
	cout << "\nCar Information: " << endl;
	car.displayInfo();

	cout << "\nEnter the truck manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cout << "Enter the towing capacity in lbs: ";
	cin >> towingCapacity;

	Truck truck(manufacturer, yearBuilt, towingCapacity);
	cout << "\nTruck Information:\n";
	truck.displayInfo();

	return 0;
}