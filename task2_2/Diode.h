// Task 2.2 - Class describes Diode as a descendant of ScdrDevice-class
// Created by Alexey Roienko, 2017
#pragma once

#include <string>
#include "ScdrDevice.h"


class Diode : public ScdrDevice {
	private:
		
		
	protected:
	    // can be made of one of two materials: Si or Ge
		std::string material = "Si";
	
	public:
		// Default constructor
		Diode() = default;
		
		// Constructor with parameter
		Diode(const std::string &, const std::string &);
				
		// Default destructor
		~Diode();
		
		//prepares string which describes object
		virtual std::string toString() override;
		
		//Action-method; describes what does device do.
		virtual void action() override;
};
