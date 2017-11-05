// Task 2.2 - Realization of Transistor-class which describes this semiconductor device
// Created by Alexey Roienko, 2017

#include "Transistor.h"
#include <iostream>


// Constructor with parameter
Transistor::Transistor(const std::string &tName, 
                       const std::string &tMaterial, 
					   const std::string &tType)
    : ScdrDevice(tName),
	  material(tMaterial),
	  type(tType)
{};

// Destructor
Transistor::~Transistor(){
	std::cout << "\t'Transistor' destructor is being run..." << std::endl;
}

// Prepares string which describes object
std::string Transistor::toString() {	
	std::string s = "'Transistor'-object's toString()-method:\n\tdeviceName = " + deviceName 
	                + ",\n\tdevice material = " + material 
					+ ",\n\tdevice type = " + type + '\n';
	s += ScdrDevice::toString();
	
	return s;
}