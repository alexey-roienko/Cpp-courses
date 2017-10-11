// Task 5 - Header of the class that counts Prime Numbers
// Created by Alexey Roienko, 2017
#pragma once

#include <vector>

namespace Fun {
	class Primes {
		public:			
			// Constructor
			Primes(const int);
			
			// Print Primes numbers from the vector
			void printPrimes();
			
			// Return vector of Primes as unsigned ints
			//std::vector<uint32_t> getPrimes();
			
		private:		
			int N;
			
			std::vector<bool> primes;
		
			void initPrimes();
			
			void findPrimes();
	};
}