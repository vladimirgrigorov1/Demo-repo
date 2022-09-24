#include <iostream>
#include <string>

// we can type usingnamespace std, but it's a bad practice 


int main() {

	// introduction to variables

	std::cout << "Please enter your annual salary: ";
	double annualSalary;
	std::cin >> annualSalary;
	double monthlySalary = annualSalary / 12;
	std::cout << "Your m onthly salary is: " << monthlySalary << std::endl;
	std::cout << "In 10 years you will earn: " << annualSalary * 10 << std::endl;

	// thing that is really important, give a meaningful name for your varible 
	// if you want to use a special symbols, the underscore is the only symbol you can use 
	// variables cannot start with numbers (ex. int 1number = 1;)
	// variables cannot contain blank spaces 

	char character = 'g';

	// use of a camel casing 

	char firstCharacter = 'a';
	char secondCharacter = 'b';

	// Data types 

	int yearOfBirth = 1995;
	char gender = 'f';
	bool isOlderThan18 = true;
	float averageGrade = 4.5;
	double balance = 123125136247.88;

	// sizeof operator

	std::cout << "Size of int is " << sizeof(int) << " bytes" << std::endl;
	std::cout << "Size of char is " << sizeof(char) << " bytes" << std::endl;
	std::cout << "Size of bool is " << sizeof(bool) << " bytes" << std::endl;
	std::cout << "Size of float is " << sizeof(float) << " bytes" << std::endl;
	std::cout << "Size of double is " << sizeof(double) << " bytes" << std::endl;
	std::cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes" << std::endl;
	
	std::cout << "Int min value is " << INT_MIN << std::endl;
	std::cout << "Int max value is " << INT_MAX << std::endl;

	// data overflow

	int intMax = INT_MAX;
	std::cout << intMax << std::endl;
	std::cout << intMax + 1 << std::endl;

	// if/else statements 

	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	if (number % 2 == 0) {
		std::cout << number << " is even number" << std::endl;
	} else {
		std::cout << number << " is odd number" << std::endl;
	}

	// nested if/else operators
	
	// logical operators(&&, ||, !)
	
	double a, b, c;
	std::cout << "Enter three sides of triangles: ";
	std::cin >> a >> b >> c;

	if (a == b && b == c) {
		std::cout << "Equilateral triangle!" << std::endl;
	} else {
		if (a != b && a != c && b != c) {
			std::cout << "Scalene triangle" << std::endl;
		} else {
			std::cout << "Isosceles triangle" << std::endl;
		}
	}

	// operators in c++

	// +, -, *, /, %

	std::cout << 5 + 4;
	std::cout << 5 - 3;
	std::cout << 5 * 3;
	std::cout << 5 / 2;
	std::cout << 5.0 / 2;
	std::cout << 5 / 2.0;
	std::cout << 5 % 2;

	// ++, --

	int counter = 7;
	counter++;
	std::cout << counter << std::endl;
	counter--;
	std::cout << counter << std::endl;

	// >, <, >=, <=, ==, !=

	int m = 5, n = 2;
	std::cout << (a > b);

	// &&, ||, !

	std::cout << (m == 5 && n == 3);
	std::cout << (m == 5 || n == 3);
	std::cout << !(m == 5 || n == 3);

	// +=, -=, *=, /=, %=

	int x = 5;
	x += 7; // x = x + 7 
	std::cout << x << std::endl;

	// swaping values

	int p = 10; 
	int q = 20;

	std::cout << "Values before swapping values: " << std::endl;
	std::cout << "p = " << p << "q = " << q << std::endl;

	int help;
	help = p;
	p = q;
	q = help;

	std::cout << "Values after swapping values: " << std::endl; 
	std::cout << "p = " << p << "q = " << q << std::endl;

	// second way

	p = p + q;
	q = p - q;
	p = p - q;

	// build BMI calculator (body mass index)
	
	std::cout << "Enter weight and height: ";
	double weight, height;
	std::cin >> weight >> height;

	double bmi = weight / height * height;

	if (bmi < 18.5) {
		std::cout << "Underweight" << std::endl;
	} else if (bmi < 25.0) {
		std::cout << "Normal weight" << std::endl;
	} else {
		std::cout << "Overweight" << std::endl;
	}

	// ternary operator

	int hostUserNum, guestUserNum;
	std::cout << "Host user number: ";
	std::cin >> hostUserNum;
	std::cout << "Guest user number: ";
	std::cin >> guestUserNum;

	// first way

	if (hostUserNum == guestUserNum) {
		std::cout << "Correct" << std::endl;
	} else {
		std::cout << "Failed" << std::endl;
	}

	// second way

	std::cout << ((hostUserNum == guestUserNum) ? "Correct" : "Failed") << std::endl;

	// third way

	(hostUserNum == guestUserNum) ? std::cout << "Correct" : std::cout << "Failed";

	// switch/case statements 

	double number1, number2;
	char operation;
	std::cin >> number1 >> number2;
	std::cin >> operation;

	switch (operation) {
	case '+':
		std::cout << number1 << " + " << number2 << " = " << number1 + number2;
		break;
	case '-':
		std::cout << number1 << " - " << number2 << " = " << number1 - number2;
		break;
	case '*':
		std::cout << number1 << " * " << number2 << " = " << number1 * number2;
		break;
	case '/':
		if (number1 != 0 && number2 != 0) {
			std::cout << number1 << " / " << number2 << " = " << number1 / number2;
		} else {
			std::cout << "It's not divided by zero!" << std::endl;
		}
		break;
	case '%':
		bool isInt1, isInt2;
		isInt1 = ((int)number1 == number1);
		isInt2 = ((int)number2 == number2);

		if (isInt1 && isInt2) {
			std::cout << number1 << " % " << number2 << " = " << (int)number1 % (int)number2;
		} else {
			std::cout << "Not valid" << std::endl;
		}
		break;
	default:
		std::cout << "Invalid operation" << std::endl;
		break;
	}

	// switch part 2

	int year, month;
	std::cout << "Enter year and month: ";
	std::cin >> year >> month;

	bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		std::cout << "Has 31 days" << std::endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		std::cout << "Has 30 days" << std::endl;
		break;
	case 2:
		isLeap ? "29 days a month" : "28 days a month";
		break;
	default:
		std::cout << "Invalid operation" << std::endl;
		break;
	}

	// while loop

	// we need to print every number between 100 and 500, that are divisible by 3 and 5

	int counter = 100;

	while (counter <= 500) {
		if (counter % 3 == 0 && counter % 5 == 0) {
			std::cout << counter << " is divisible!" << std::endl;
		}
		counter++;
	}

	// count digits of a number

	std::cout << "Enter a number: ";
	int number;
	std::cin >> number;

	if (number == 0) {
		std::cout << "You entered 0" << std::endl;
	} else {
		int counter = 0;
		while (number > 0) {
			number /= 10;
			counter++;
		}
		std::cout << "Number contains " << counter << " digits."  << std::endl;
	}

	// reverse digits

	int num, reverse = 0;
	std::cout << "Enter a number: ";
	std::cin >> num;

	// step by step
	
	while (num > 0) {
		reverse *= 10;
		int lastDigit = num % 10;
		reverse += lastDigit;
		num /= 10;
	}

	std::cout << "Reverse number: " << reverse << std::endl;

	// do while loop

	int usersPin = 1234, pin, errorCounter = 0;

	do {
		std::cout << "Enter pin: ";
		std::cin >> pin;
		if (usersPin != pin)
			errorCounter++;
	} while (usersPin != pin && errorCounter < 3);

	if (errorCounter < 3)
		std::cout << "Loading..." << std::endl;
	else
		std::cout << "Blocked..." << std::endl;

	// for loop

	// factorial of a number

	int numb, factorial = 0;
	std::cout << "Enter a number: ";
	std::cin >> numb;

	for (int i = 1; i <= numb; i++) {
		factorial *= i;
	}
	
	std::cout << "Factorial of a number " << numb << " is " << factorial << std::endl;
	
	// nested loop 

	int grade, sum = 0;

	for (int i = 0; i < 3; i++) {
		do {
			std::cout << "Enter grade: " << i + 1 << std::endl;
			std::cin >> grade;
		} while (grade < 1 || grade > 5);
		sum += grade;
	}

	std::cout << "Sum of grades: " << sum << std::endl;
	std::cout << "Average grade: " << (double)sum / 3.0 << std::endl;

	// nested for loops 

	// multiplication table

	int m;
	std::cin >> m;

	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= m; j++) {
			std::cout << i << " * " << j << " = " << i * j << std::endl;
		}
		std::cout << std::endl;
	}

	// that is for SoftUni project, but I messed up

	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}

	// drawing rectangle shape 

	int x, y;
	std::cin >> x >> y;

	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= y; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	// P.S. I am gonna miss just one thing (that's for drawing shapes, actually any kind of tringles and other stuffs), i was just made a simple rectengle and square just to see how is it, and now I am gonna move on to functions, to understand thier syntax and to dive into it more and more.

	// and after that are arrays, mutltidimensional arrays, but I am gonna split these things from functions
	// it's like the second part of a introduction to programming

	system("cls");
	system("pause");

	return 0;
}

