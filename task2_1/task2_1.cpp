// Task 2.1 - Implementation of own class
// Created by Alexey Roienko, 2017

#include <iostream>
#include "Bicycle.h"


int main() {
	using namespace std;
	
	// Check Explicit constructor and Static variable
	if (0 == Bicycle::boughtBicyclesN) {
		cout << "\nObject Bicycle - EXPLICIT constructor:" << endl;
		Bicycle bcl1(BicycleTypes::Mountain, BicycleProducers::TrekSport, 19.5, 26, 15'000);
		cout << bcl1.toString() << endl;
		// Check the destructor at once
	}
	
	// Test default constructor
	//cout << "\nObject Bicycle - DEFAULT constructor:" << endl;
	//Bicycle bcl2();
	//cout << bcl2.toString() << endl;	
	
	// Test STATIC function
	//Bicycle::infoAboutBicycleType(BicycleTypes::Mountain);
	
	// Check some object methods
	Bicycle bcl3(BicycleTypes::BMX, BicycleProducers::Skott, 21, 24, 13'450);
	//cout << bcl3.toString() << endl;
	//bcl3.toString();
	
	cout << "\nBicycle #3 has frameSize = " << bcl3.getFrameSize() << " inches and wheels diameter = " 
	     << bcl3.getWheelsDiameter() << "inches.\n" << endl;
	
	
	// Check Friend-functions for blc3-object
	double oldPrice = getPrice(bcl3);
	cout << "\nOld price (using Friend-function) of the BCL3 bicycle was " << oldPrice << endl;
	setPrice(14'000, bcl3);	
	cout << "New Price (using Friend-function) is "  << bcl3.getPrice() << endl;
	
	
	return 0;
}

