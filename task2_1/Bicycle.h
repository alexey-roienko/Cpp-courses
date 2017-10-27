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
		
		friend void setPrice(const double, Bicycle&);
		friend double getPrice(Bicycle&);
		
		std::array<std::string, static_cast<unsigned int>(BicycleTypes::COUNT)> bTypesDescr{
			"Road bicycles are designed for traveling at speed on paved roads.",
			"Touring bicycles are designed for bicycle touring and long journeys.",
			"Hybrid bicycles are a compromise between the mountain and racing style bicycles which replaced European-style utility bikes in North America in the early 1990s.",
			"Mountain bicycles are designed for off-road cycling. All mountain bicycles feature sturdy, highly durable frames and wheels, wide-gauge treaded tires, and cross-wise handlebars to help the rider resist sudden jolts",
			"Racing bicycles are designed for speed, and the sport of competitive road racing.",
			"BMX bikes are designed for stunts, tricks, and racing on dirt BMX tracks.",
			"Cruiser bicycles are heavy framed bicycles designed for comfort, with curved back handlebars, padded seats, and balloon tires."
		};
		
	public:
		static unsigned int boughtBicyclesN;
	
		static unsigned int getBoughtBicyclesN();
	
		// Default constructor
		Bicycle() = default;
				
		// Constructor
		Bicycle(const BicycleTypes, const BicycleProducers, const double, 
		        const double, const double);		

		// Default destructor
		~Bicycle();
	
	
		// Custom methods
		// String representation of the object
		std::string toString();
		
		// STATIC, information about bicycle type
	    static void infoAboutBicycleType(const BicycleTypes);
	
	
		// Getters and Setters
		// 'Type' field
		BicycleTypes getType();
		void setType(const BicycleTypes);
		 
		// 'Producer' field
		BicycleProducers getProducer();
		void setProducer(const BicycleProducers);
		
		// 'frameSize' field
		double getFrameSize();
		void setFrameSize(const double);
		
		// 'wheelsDiameter' field
		double getWheelsDiameter();
		void setWheelsDiameter(const double);
		
		// 'price' field
		double getPrice();
		void setPrice(const double);		
		
		// hasBought-field
		// Buy a bicycle
		void buyBicycle();		
		// Is the bicycle bought?
		bool isBought();
};

#endif