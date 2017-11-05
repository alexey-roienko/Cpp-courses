// Task 2.2 - Class describes Semiconductor Device
// Created by Alexey Roienko, 2017
#pragma once

#include <string>

class ScdrDevice {
	private:
		
		
	protected:
	    // will contain different types in descendants
		std::string deviceName = "Noname";
	
	public:
		// Default constructor
		ScdrDevice() = default;
				
		// Constructor with parameter
		ScdrDevice(const std::string &);
		
		// Default destructor
		~ScdrDevice();
		
		//prepares string which describes object
		virtual std::string toString();
		
		//Action-method; describes what does device do.
		virtual void action() = 0;
};
