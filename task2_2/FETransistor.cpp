// Task 2.2 - Realization of Field-Effect Transistor-class which describes 
// this semiconductor device
// Created by Alexey Roienko, 2017

#include "FETransistor.h"
#include <iostream>


// Constructor with parameter
FETransistor::FETransistor(const std::string &tName, 
                           const std::string &tMaterial, 
					       const std::string &tType)
    : Transistor(tName, tMaterial, tType)
{};

// Destructor
FETransistor::~FETransistor(){
	std::cout << "\t'FETransistor' destructor is being run..." << std::endl;
}

// Prepares string which describes object
std::string FETransistor::toString() {	
	std::string s = "'FETransistor'-object's toString()-method:\n\tdeviceName = " + deviceName 
	                + ",\n\tdevice material = " + material 
					+ ",\n\tdevice type = " + type + '\n';
	s += Transistor::toString();
	
	return s;
}
	
// Action-method; describes what does device do.
void FETransistor::action(){
	using namespace std;
	cout << "FETransistor has channel, three terminals and can be used for current stabilization." 
	     << endl;
}


