// Task 4 - Implementation of functions toUpper(), toLower()
// Created by Alexey Roienko, 2017

#include <iostream>


char toUpper(char c);
char toLower(char c);


int main() {
	using namespace std;
	
	char ch;
	
	for(;;) {
		cout << "\n\tInput the LATIN letter (or 0 for exit): ";
		cin >> ch;
		if ('0' == ch)
			break;
		
		// if Capital letter
		if ((ch>64) & (ch<91))
			ch = toLower(ch);
		else if ((ch>96) & (ch<123))
			// if Small letter
			ch = toUpper(ch);
		
		cout << "\n\tTransformed letter is: " << ch << endl;
	}
	
	return 0;
}

char toUpper(char c) {
	return (c-32);
}

char toLower(char c) {
	return (c+32);
}
