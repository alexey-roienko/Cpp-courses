// Task 2.2 - Class describes Field-Effect Transistor as a descendant of Transistor-class
// Created by Alexey Roienko, 2017
#pragma once

#include <string>
#include "Transistor.h"


class FETransistor : public Transistor {
	private:
		
		
	protected:
	    
	
	public:
		// Default constructor
		FETransistor() = default;
		
		// Constructor with parameter
		FETransistor(const std::string &, const std::string &, const std::string &);
				
		// Default destructor
		~FETransistor();
		
		//prepares string which describes object
		virtual std::string toString() override;
		
		//Action-method; describes what does device do.
		virtual void action() override;
};
