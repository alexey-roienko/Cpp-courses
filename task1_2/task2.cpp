// Task 2 - Printing bytes of LONG LONG number
// Created by Alexey Roienko, 2017

#include <iostream>
#include <vector>

int main() {
	using namespace std;
	
	unsigned long long N = 0;
	
	uint16_t bytesN = sizeof(N);	
	
	for(;;) {
		cout << "\n\tInput the unsigned LONG number (or 0 for exit): ";
		cin >> N;
		if (0 == N)
			break;
		
		// create a vector for bytes
		vector<uint8_t> bytes(bytesN);		
		
		// separate each byte
		for(int i=0; i<bytesN; i++) {
			uint8_t temp = (N >> (i*8)) & 0xFF;
			bytes[bytesN-1-i] = temp;
		}
		
		// print found bytes
		cout << "\n\tNumber in HEX: 0x";
		for(int i=0; i<bytesN; i++) {
			if (bytes[i] > 0)
				cout << hex << (int)bytes[i];
			else
				cout << "00";			
		}
		cout << endl;
	}
	
	return 0;
}


