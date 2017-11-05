// Task 2.2 - Class describes Transistor as a descendant of ScdrDevice-class
// Created by Alexey Roienko, 2017
#pragma once

#include <string>
#include "ScdrDevice.h"

class Transistor : public ScdrDevice {
	private:
		
		
	protected:
	    // can be made of one of two materials: Si or Ge
		std::string material = "Undefined material";
		// can be either p-n-p or n-p-n for BJT or p-type or n-type for FET
		std::string type = "Undefined type";
	
	public:
		// Default constructor
		Transistor() = default;
		
		// Constructor with parameter
		Transistor(const std::string &, const std::string &, const std::string &);
				
		// Default destructor
		~Transistor();
		
		//prepares string which describes object
		virtual std::string toString() override;
		
		//Action-method; describes what does device do.
		virtual void action() = 0;
};
