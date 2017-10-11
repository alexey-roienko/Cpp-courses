// Task 1 - Looking for the Prime Numbers
// Created by Alexey Roienko, 2017

#include <iostream>
#include <vector>

void initPrimes(std::vector<bool> & primesRef, const int numb);
void findPrimes(std::vector<bool> & primesRef, const int numb);
void printPrimes(std::vector<bool> & primesRef, const int numb);


int main() {
	using namespace std;
	
	int N;	
	
	for(;;) {
		cout << "\tInput the INT number (or 0 for exit): " << endl;
		cin >> N;
		if (0 == N)
			break;
		
		// create an array; index will define prime number
		vector<bool> primes(N+1);
		
		// init vector with TRUE
		initPrimes(primes, N);
		
		// finding all primes to N
		findPrimes(primes, N);
		
		//print numbers
		printPrimes(primes, N);		
	}
	
	return 0;
}

void initPrimes(std::vector<bool> & primesRef, const int numb){	
	//maybe it is better to find the last prime number and
	//make a cycle to it
	for(int i=0; i<=numb; i++){
		primesRef[i] = true;
	}	
}

void findPrimes(std::vector<bool> & primesRef, const int numb){	
	//maybe it is better to find the last prime number and
	//make a cycle to it
	int index = 2;
	while (index < numb) {   //not optimal		
		for(int i=2*index; i<=numb; i+=index){
			primesRef[i] = false;
		}
		// increase the index and 
		while (!primesRef[++index]);
	}	
}

void printPrimes(std::vector<bool> & primesRef, const int numb){	
	// print prime numbers found
	using namespace std;
	
	for(int i=1; i<=numb; i++){
		if (true == primesRef[i])
			cout << i << " ";
	}
	cout << endl;
}



