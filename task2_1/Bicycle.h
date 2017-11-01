// Task 2.1 - Class Bicycle
// Created by Alexey Roienko, 2017
#ifndef _BICYCLE_H_

#define _BICYCLE_H_

#include <string>
#include "BicyclesInfo.h"

class Bicycle {
	private:
		BicycleTypes type;
		BicycleProducers producer;		
		double frameSize;
		double wheelsDiameter;
		double price;
		bool hasBought;		
		
		static unsigned int createdBicyclesN;
		static std::array<std::string, static_cast<unsigned int>(BicycleTypes::COUNT)> bTypesDescr;
		//static char* bTypesDescr[];
		
		friend void setPrice(const double, Bicycle&);
		friend double getPrice(Bicycle&);
		
	public:
		// Default constructor
		//Bicycle() = default;
		Bicycle();
				
		// Constructor
		Bicycle(const BicycleTypes, const BicycleProducers, const double, 
		        const double, const double);		

		// Default destructor
		~Bicycle();
		
		// Custom methods
		// String representation of the object
		std::string toString();
		
		// Getters and Setters
		// 'Type' field
		auto getType() -> BicycleTypes {return type;};
		void setType(const BicycleTypes);
		 
		// 'Producer' field
		auto getProducer() -> BicycleProducers {return producer;};
		void setProducer(const BicycleProducers);
		
		// 'frameSize' field
		auto getFrameSize() -> double {return frameSize;};
		void setFrameSize(const double);
		
		// 'wheelsDiameter' field
		auto getWheelsDiameter() -> double {return wheelsDiameter;};
		void setWheelsDiameter(const double);
		
		// 'price' field
		double getPrice();
		void setPrice(const double);		
		
		// hasBought-field
		// Buy a bicycle
		void buyBicycle();		
		// Is the bicycle bought?
		auto isBought() -> bool {return hasBought;};
		
		// Getter for static variable 'createdBicyclesN'
		static unsigned int getCreatedBicyclesN();
	
		// STATIC, information about bicycle type
	    static void infoAboutBicycleType(const BicycleTypes);
};

#endif