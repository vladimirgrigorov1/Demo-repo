#include <iostream>
#include <string>

int main() {
	// simple check

	// 1.

	int grade;
	std::cin >> grade;

	if (grade == '5') {
		std::cout << "Excellent!" << std::endl;
	}

	// 2.

	std::string color = "red";

	if (color == "yellow") {
		std::cout << "Banana" << std::endl;
	} else if (color == "red") {
		std::cout << "tomato" << std::endl;
	} else {
		std::cout << "lemon" << std::endl;
	}

	// 3.

	int number;
	std::cin >> number;

	if (number % 2 == 0) {
		std::cout << "Even number" << std::endl;
	} else {
		std::cout << "Odd number" << std::endl;
	}

	// 4.

	int a, b;
	std::cin >> a >> b;

	if (a > b) {
		std::cout << "a is bigger " << std::endl;
	} else {
		std::cout << "b is bigger " << std::endl;
	}



	return 0;
}