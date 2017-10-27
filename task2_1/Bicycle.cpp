// Task 2.1 - Realization of Bicycle-class which describes Bicycle entity
// Created by Alexey Roienko, 2017

#include <iostream>
#include "Bicycle.h"

// initialization of class static variable
unsigned int Bicycle::boughtBicyclesN = 0;


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
	boughtBicyclesN++;
	hasBought = false;
	std::cout << "\tExplicit constructor is being run..." << std::endl;
}

// Destructor
Bicycle::~Bicycle(){
	std::cout << "\tDestructor is being run..." << std::endl;
}

// 'Getter' for 'type' field
BicycleTypes Bicycle::getType() {
	return type;
}
// 'Setter' for 'type' field
void Bicycle::setType(const BicycleTypes newType){
	type = newType;
}
 
// 'Getter' for 'producer' field
BicycleProducers Bicycle::getProducer(){
	return producer;
}
// 'Setter' for 'producer' field
void Bicycle::setProducer(const BicycleProducers newProducer){
	producer = newProducer;
}

// 'Getter' for 'frameSize' field
double Bicycle::getFrameSize(){
	return frameSize;
}
// 'Setter' for 'frameSize' field
void Bicycle::setFrameSize(const double newFrameSize){
	frameSize = newFrameSize;
}

// 'Getter' for 'wheelsDiameter' field
double Bicycle::getWheelsDiameter(){
	return wheelsDiameter;
}
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

// 'Getter' for 'hasBought' field
bool Bicycle::isBought() {
	return hasBought;
}
// 'Setter' for 'hasBought' field
void Bicycle::buyBicycle() {
	hasBought = true;
}

// 'toString' object method
std::string Bicycle::toString(){
	std::string s = "\nThis bicycle is of ";
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
	
	s += (",\nhas FrameSize = " + std::to_string(frameSize) + " inches,\n" + "WheelsDiameter = " + std::to_string(wheelsDiameter) + " inches,\n"
	    + "price = " + std::to_string(price) + " grn. and " + (hasBought ? "has already bought." : "is free.\n"));

	return s;
}

// static method 
void Bicycle::infoAboutBicycleType(const BicycleTypes type){
	//std::cout << Bicycle::bTypesDescr.at(type) << std::endl;
}

void setPrice(const double newPrice, Bicycle& obj){
	obj.price = newPrice;
	std::cout << "Friend function 'setPrice()' is being run." << std::endl;
}

double getPrice(Bicycle& obj) {
	std::cout << "Friend function 'getPrice()' is being run." << std::endl;
	return obj.price;
}








