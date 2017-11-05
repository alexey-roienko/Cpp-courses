	// Task 2.2 - Realization of ScdrDevice-class which describes Semiconductor device
// Created by Alexey Roienko, 2017

#include "ScdrDevice.h"
#include <iostream>


// Constructor with parameter
ScdrDevice::ScdrDevice(const std::string &dName)
    : deviceName(dName)
{};

// Destructor
ScdrDevice::~ScdrDevice(){
	std::cout << "\t'ScdrDevice' destructor is being run..." << std::endl;
}

std::string ScdrDevice::toString(){	
	std::string s = "'ScrdDevice'-object's toString()-method, deviceName = " + deviceName + '\n';
	return s;
}









