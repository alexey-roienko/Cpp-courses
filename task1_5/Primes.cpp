// Task 5 - Realization of Primes-class which looks for the Prime Numbers
// Created by Alexey Roienko, 2017

#include <iostream>
#include "Primes.h"

namespace Fun {
	Primes::Primes(const int numb): N(numb) {		
		if (primes.capacity() < N+1)
			primes.resize(N+1);
		initPrimes();
		findPrimes();
	}	
	
	void Primes::initPrimes(){
		for(int i=0; i<=N; i++){
			primes[i] = true;
		}
	}
	
	void Primes::findPrimes(){
		int index = 2;
		while (index < N) {   //not optimal		
			for(int i=2*index; i<=N; i+=index){
				primes[i] = false;
			}
			// increase the index and 
			while (!primes[++index]);
		}
	}
	
	void Primes::printPrimes(){	
		// print prime numbers been found
		using namespace std;
	
		for(int i=1; i<=N; i++){
			if (true == primes[i])
				cout << i << " ";
		}
		cout << endl;
	}
}
