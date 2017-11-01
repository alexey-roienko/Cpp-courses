// Task 2.1 - Realization of Bicycle-class which describes Bicycle entity
// Created by Alexey Roienko, 2017

#include <iostream>
#include <iomanip> 
#include "Bicycle.h"


std::array<std::string, static_cast<unsigned int>(BicycleTypes::COUNT)> Bicycle::bTypesDescr{
	"Road bicycles are designed for traveling at speed on paved roads.",
	"Touring bicycles are designed for bicycle touring and long journeys.",
	"Hybrid bicycles are a compromise between the mountain and racing style bicycles which replaced European-style utility bikes in North America in the early 1990s.",
	"Mountain bicycles are designed for off-road cycling. All mountain bicycles feature sturdy, highly durable frames and wheels, wide-gauge treaded tires, and cross-wise handlebars to help the rider resist sudden jolts",
	"Racing bicycles are designed for speed, and the sport of competitive road racing.",
	"BMX bikes are designed for stunts, tricks, and racing on dirt BMX tracks.",
	"Cruiser bicycles are heavy framed bicycles designed for comfort, with curved back handlebars, padded seats, and balloon tires."
};


/*
char* Bicycle::bTypesDescr[]={
	"Road bicycles are designed for traveling at speed on paved roads.",
	"Touring bicycles are designed for bicycle touring and long journeys.",
	"Hybrid bicycles are a compromise between the mountain and racing style bicycles which replaced European-style utility bikes in North America in the early 1990s.",
	"Mountain bicycles are designed for off-road cycling. All mountain bicycles feature sturdy, highly durable frames and wheels, wide-gauge treaded tires, and cross-wise handlebars to help the rider resist sudden jolts",
	"Racing bicycles are designed for speed, and the sport of competitive road racing.",
	"BMX bikes are designed for stunts, tricks, and racing on dirt BMX tracks.",
	"Cruiser bicycles are heavy framed bicycles designed for comfort, with curved back handlebars, padded seats, and balloon tires."
};
*/

// initialization of class static variable
unsigned int Bicycle::createdBicyclesN = 0;

// implementation of static method
unsigned int Bicycle::getCreatedBicyclesN() {
	return Bicycle::createdBicyclesN;
}

// Default constructor
Bicycle::Bicycle() {
	frameSize = 19.5;
	wheelsDiameter = 26.0;
	price = 10'000.0;
	
	createdBicyclesN++;
	hasBought = false;
	std::cout << "\tDefault constructor is being run..." << std::endl;
}

// Explicit constructor with parameters
Bicycle::Bicycle(const BicycleTypes type_, const BicycleProducers producer_,
				 const double frameSize_, const double wheelsDiameter_,
				 const double price_):
	type(type_),
	producer(producer_),
	frameSize(frameSize_),
	wheelsDiameter(wheelsDiameter_),
	price(price_)
{
	createdBicyclesN++;
	hasBought = false;
	std::cout << "\tExplicit constructor was run..." << std::endl;
}

// Destructor
Bicycle::~Bicycle(){
	std::cout << "\tDestructor is being run...\n" << std::endl;
}

// 'Getter' for 'type' field is implemented in header
// 'Setter' for 'type' field
void Bicycle::setType(const BicycleTypes newType){
	type = newType;
}
 
// 'Getter' for 'producer' field is implemented in header
// 'Setter' for 'producer' field
void Bicycle::setProducer(const BicycleProducers newProducer){
	producer = newProducer;
}

// 'Getter' for 'frameSize' field is implemented in header
// 'Setter' for 'frameSize' field
void Bicycle::setFrameSize(const double newFrameSize){
	frameSize = newFrameSize;
}

// 'Getter' for 'wheelsDiameter' field is implemented in header
// 'Setter' for 'wheelsDiameter' field
void Bicycle::setWheelsDiameter(const double newWheelsDiameter){
	wheelsDiameter = newWheelsDiameter;
}

// 'Getter' for 'price' field
double Bicycle::getPrice(){
	std::cout << "Object method 'getPrice()' is being run." << std::endl;
	return price;
}
// 'Setter' for 'price' field
void Bicycle::setPrice(const double newPrice){
	std::cout << "Object method 'setPrice()' is being run." << std::endl;
	price = newPrice;
}

// 'Getter' for 'hasBought' field is implemented in header
// 'Setter' for 'hasBought' field
void Bicycle::buyBicycle() {
	hasBought = true;
}

// 'toString' object method
std::string Bicycle::toString(){
	using namespace std;
	
	string s = "This bicycle is of ";
	switch (type){
		case BicycleTypes::Road:
			s += "Road";
		break;
		case BicycleTypes::Touring:
			s += "Touring";
		break;
		case BicycleTypes::Hybrid:
			s += "Hybrid";
		break;
		case BicycleTypes::Mountain:
			s += "Mountain";
		break;
		case BicycleTypes::Racing:
			s += "Racing";
		break;
		case BicycleTypes::BMX:
			s += "BMX";
		break;
		case BicycleTypes::Cruiser:
			s += "Cruiser";
		break;
		default:
			s += "Unknown";
	}
	s += " type, produced by ";
	
	switch (producer){
		case BicycleProducers::TrekSport:
			s += "TrekSport";
		break;
		case BicycleProducers::Cannondale:
			s += "Cannondale";
		break;
		case BicycleProducers::Bianchi:
			s += "Bianchi";
		break;
		case BicycleProducers::Skott:
			s += "Skott";
		break;
		case BicycleProducers::AIST:
			s += "AIST";
		break;
		case BicycleProducers::GT:
			s += "GT";
		break;
		case BicycleProducers::Mongoose:
			s += "Mongoose";
		break;
		case BicycleProducers::GaryFisher:
			s += "GaryFisher";
		break;
		default:
			s += "Unknown";
	}
	
	char temp[8];
	sprintf(temp, "%.1f", frameSize);
	string s1 = string(temp);
	s += (",\nhas FrameSize = " + s1 + " inches,\n" + "WheelsDiameter = ");
	
	sprintf(temp, "%.1f", wheelsDiameter);
	s1 = string(temp);
	s += (s1 + " inches,\n" + "price = ");

	sprintf(temp, "%.1f", price);
	s1 = string(temp);
	s += (s1 + " grn. and " + (hasBought ? "has already bought." : "is free."));
	
	return s;
}

// static method 
void Bicycle::infoAboutBicycleType(const BicycleTypes type){
	std::cout << bTypesDescr[static_cast<unsigned int>(type)] << std::endl;
}

void setPrice(const double newPrice, Bicycle& obj){
	obj.price = newPrice;
	std::cout << "Friend function 'setPrice()' is being run." << std::endl;
}

double getPrice(Bicycle& obj) {
	std::cout << "Friend function 'getPrice()' is being run." << std::endl;
	return obj.price;
}








