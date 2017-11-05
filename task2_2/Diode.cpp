// Task 2.2 - Realization of Diode-class which describes this semiconductor device
// Created by Alexey Roienko, 2017

#include "Diode.h"
#include <iostream>


// Constructor with parameter
Diode::Diode(const std::string &dName, const std::string &dMaterial)
    : ScdrDevice(dName),
	  material(dMaterial)
{};

// Destructor
Diode::~Diode(){
	std::cout << "\t'Diode' destructor is being run..." << std::endl;
}

// Prepares string which describes object
std::string Diode::toString() {	
	std::string s = "'Diode'-object's toString()-method:\n\tdeviceName = " + deviceName 
	                + ",\n\tdevice material = " + material + '\n';
	s += ScdrDevice::toString();
	
	return s;
}

// Action-method; describes what does device do.
void Diode::action() {
	using namespace std;
	cout << "Diode conducts current of one direction and opposes current flow if it has another direction" 
	     << endl;
}









