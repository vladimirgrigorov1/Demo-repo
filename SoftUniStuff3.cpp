#include <iostream>
#include <string>
#include <iomanip>

int main() {

	int n; 
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n) {
				std::cout << "*";
			} else {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}

	// square area

	int a;
	std::cout << "Enter a number: ";
	std::cin >> a;

	int area = a * a;
	std::cout << "Area: " << area << std::endl;

	// from inches to centimeters

	double inches;
	std::cout << "Enter inches: ";
	std::cin >> inches;
	double centimeters = inches * 2.54;
	std::cout << "Centimeters: ";
	std::cout << centimeters << std::endl;

	// greeting by name 

	std::string name;
	std::getline(std::cin, name);
	std::cout << "My name is " << name << std::endl;

	// getting together text and numbers

	std::string firstName, lastName, town;
	int age;
	std::cin >> firstName >> lastName >> town >> age;
	std::cout << "My name is " << firstName << " " << lastName << " and I am " << age << " years old, from " << town << "." << std::endl;

	// trapezoid area

	double b1, b2, h;
	std::cin >> b1 >> b2 >> h;

	double tArea = (b1 + b2) * h / 2;

	std::cout << "Trapezoid area: " << tArea << std::endl;

	// perimeter and area of a circle

	double r, pi = 3.14;

	double area = r * r * pi;
	double perimeter = 2 * pi * r;

	// area of rectangle in space

	double x1, x2, y1, y2;
	std::cin >> x1 >> x2 >> y1 >> y2;

	double width = abs(x2 - x1);
	double height = abs(y2 - y1);

	double area = width * height;
	double perimeter = 2 * (width + height);

	// triangle area

	int a, h;
	std::cout << "Enter a and h: ";
	std::cin >> a >> h;

	double triangleArea = a * h / 2;

	std::cout << "Triangle area: " << triangleArea << std::endl;

	// from celsius to fahrenheit

	double celsius;
	std::cout << "Enter celsius: ";
	std::cin >> celsius;
	double fahrenheit = celsius * 1.8000 + 32.00;
	std::cout << "Fahrenheit: " << std::setprecision(2) << fahrenheit << std::endl;

	// from radians to degrees

	double rad;
	double pi = 3.14;
	std::cout << "Radians: ";
	std::cin >> rad;
	double deg = rad * 180 / pi;
	std::cout << "Degrees: " << deg << std::endl;

	// from usd to bgn

	double usd;
	std::cout << "USD: ";
	std::cin >> usd;
	double bgn = usd * 1.79549;
	std::cout << bgn << " BGN" << std::endl;

	//

	std::string USD = "USD";
	std::string BGN = "BGN";
	std::string EUR = "EUR";
	std::string GBP = "GBP";

	double leva = 1;
	double dolari = 1.79549;
	double evri = 1.95583;
	double payndove = 2.53405;

	double amount;
	std::string old_currency;
	std::string new_currency;
	std::cin >> amount;
	std::cin >> old_currency;

	if (old_currency == USD) {
		amount *= dolari;
	} else if (old_currency == BGN) {
		amount *= leva;
	} else if (old_currency == EUR) {
		amount *= evri;
	} else {
		amount *= payndove;
	}

	std::cin >> new_currency;

	if (new_currency == USD) {
		amount /= dolari;
		std::cout << amount << std::endl;
	} else if (new_currency == BGN) {
		amount /= leva;
		std::cout << amount << std::endl;
	} else if (new_currency == EUR) {
		amount /= evri;
		std::cout << amount << std::endl;
	} else {
		amount /= payndove;
		std::cout << amount << std::endl;
	}

	system("cls");
	system("pause");

	return 0;
}