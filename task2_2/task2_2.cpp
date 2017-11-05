// Task 2.1 - Implementation of own class
// Created by Alexey Roienko, 2017

#include <iostream>
#include "Diode.h"
#include "BJTransistor.h"
#include "FETransistor.h"


int main() {
	using namespace std;
	
	cout << endl;
	
	// Test Diode object
	Diode d1("Rectifier diode", "Ge");
	cout << d1.toString() << endl;	
	d1.action();
	cout << endl;
	
	// Test BJTransistor object
	BJTransistor t1("BJ Transistor", "Si", "p-n-p");
	cout << t1.toString() << endl;	
	t1.action();
	cout << endl;
	
	// Test BJTransistor object, Default constructor
	BJTransistor t2;
	cout << t2.toString() << endl;	
	t2.action();
	cout << endl;
		
	// Test FETransistor object
	FETransistor t3("FE Transistor", "Ge", "n-type");
	cout << t3.toString() << endl;	
	t3.action();
	cout << endl;
	
	// Test FETransistor object, Default constructor
	FETransistor t4;
	cout << t4.toString() << endl;	
	t4.action();
	cout << endl;
	
	return 0;
}

