// Task 3 - Implemeting Quine
// Created by Alexey Roienko, 2017

#include <iostream>

int main() {
	std::string s = "\n#include <iostream>\n\nint main() {\nstd::string s = \"\";\nstd::cout << s.substr(0,51) + s + s.substr(52) << std::endl;\nreturn 0;\n}";
	
	std::cout << s.substr(0,52) + s + s.substr(52) << std::endl;
		
	return 0;
}



