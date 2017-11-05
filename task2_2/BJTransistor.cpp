// Task 2.2 - Realization of Bipolar Junction Transistor-class which describes 
// this semiconductor device
// Created by Alexey Roienko, 2017

#include "BJTransistor.h"
#include <iostream>


// Constructor with parameter
BJTransistor::BJTransistor(const std::string &tName, 
                           const std::string &tMaterial, 
					       const std::string &tType)
    : Transistor(tName, tMaterial, tType)
{};

// Destructor
BJTransistor::~BJTransistor(){
	std::cout << "\t'BJTransistor' destructor is being run..." << std::endl;
}

// Prepares string which describes object
std::string BJTransistor::toString(){	
	std::string s = "'BJTransistor'-object's toString()-method:\n\tdeviceName = " + deviceName 
	                + ",\n\tdevice material = " + material 
					+ ",\n\tdevice type = " + type + '\n';
	s += Transistor::toString();
	
	return s;
}
	
// Action-method; describes what does device do.
void BJTransistor::action(){
	using namespace std;
	cout << "BJTransistor has two p-n junctions, three terminals and performs amplification of input voltage." 
	     << endl;
}


