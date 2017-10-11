// Task 4 - Implementation of functions toUpper(), toLower()
// Created by Alexey Roienko, 2017

#include <iostream>
#include "fun.h"
#include "Primes.h"

int main() {
	using namespace std;
	using namespace Fun;
	
	int N;
	for(;;) {
		cout << "\tInput the INT number (or 0 for exit): " << endl;
		cin >> N;
		if (0 == N)
			break;
		
		Primes pNumbers(N);
		pNumbers.printPrimes();		
	}	
	
	char ch, chL, chU;	
	for(;;) {
		cout << "\n\tInput the LATIN letter (or 0 for exit): ";
		cin >> ch;
		if ('0' == ch)
			break;
		
		// if Small letter
		chU = toUpper(ch);
		chL = toLower(chU);
		
		cout << "\n\tInitial letter is: " << ch << endl;
		cout << "\tTransformed letters are:" << endl;
		cout << "\t toLower = " << chL << ", toUpper = " << chU << endl;
	}
	
	return 0;
}

