// Task 2.1 - Implementation of own class
// Created by Alexey Roienko, 2017

#include <iostream>
#include "Bicycle.h"


int main() {
	using namespace std;
	
	cout << endl;
	
	// Check Explicit constructor and Static variable
	if (0 == Bicycle::getCreatedBicyclesN()) {
		Bicycle bcl1(BicycleTypes::Mountain, BicycleProducers::TrekSport, 19.5, 26.0, 15'000.0);		
		cout << "Object Bicycle #" << Bicycle::getCreatedBicyclesN() << ":" << endl;		
		cout << bcl1.toString() << endl;
		// Check the destructor at once
	}
	
	// Test default constructor	
	Bicycle bcl2;
	cout << "Object Bicycle #" << Bicycle::getCreatedBicyclesN() << ":" << endl;
	cout << bcl2.toString() << endl << endl;
		
	
	// Check some object methods	
	Bicycle bcl3(BicycleTypes::BMX, BicycleProducers::Skott, 21.0, 24.0, 13'450.0);	
	cout << "Object Bicycle #" << Bicycle::getCreatedBicyclesN() << ":" << endl;
	cout << bcl3.toString() << endl;	
	
	cout << "\nCheck object methods:" << endl;
	cout << "Bicycle #" << Bicycle::getCreatedBicyclesN() << " has frameSize = " 
	     << bcl3.getFrameSize() << " inches and wheels diameter = " 
	     << bcl3.getWheelsDiameter() << " inches.\n" << endl;
	
	
	// Test STATIC function
	cout << "Check STATIC method:" << endl;
	Bicycle::infoAboutBicycleType(BicycleTypes::Mountain);
	
	// Check Friend-functions for blc3-object
	cout << "\nCheck FRIEND functions:" << endl;
	double oldPrice = getPrice(bcl3);
	cout << "Old price of the BCL3 bicycle was " << oldPrice << endl;
	setPrice(14'000, bcl3);	
	double newPrice = getPrice(bcl3);
	cout << "New Price is "  << newPrice << endl << endl;
	
	
	return 0;
}

