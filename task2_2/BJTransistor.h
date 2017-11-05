// Task 2.2 - Class describes Bipolar Junction Transistor as a descendant of Transistor-class
// Created by Alexey Roienko, 2017
#pragma once

#include <string>
#include "Transistor.h"


class BJTransistor : public Transistor {
	private:
		
		
	protected:
	    
	
	public:
		// Default constructor
		BJTransistor() = default;
		
		// Constructor with parameter
		BJTransistor(const std::string &, const std::string &, const std::string &);
				
		// Default destructor
		~BJTransistor();
		
		//prepares string which describes object
		virtual std::string toString() override;
		
		//Action-method; describes what does device do.
		virtual void action() override;
};
