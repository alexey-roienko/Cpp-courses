// Task 5 - Implementation of functions toUpper(), toLower() in separate h and cpp files
// Created by Alexey Roienko, 2017

#include "fun.h"

namespace Fun {
	
	char toUpper(const char c){
		if ((c > 96) & (c < 123)){
			return (c-32);
		} 
		else
			return c;
	}
	
	char toLower(const char c){
		if ((c > 64) & (c < 91)){
			return (c+32);
		}
		else
			return c;
	}
}

