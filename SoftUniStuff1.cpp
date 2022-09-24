#include <iostream>

int main() {
	
	// exams tasks

	// 1.

	double length, width;
	std::cout << "Length: ";
	std::cin >> length;
	std::cout << "Width: ";
	std::cin >> width;

	int rows = (int)length / 120;
	int cols = ((int)width - 100) / 70;

	int seats = rows * cols - 3;

	std::cout << seats << std::endl;

	// 2.

	double priceForVegetables;
	double priceForFruits;
	int totalPriceForVegetables;
	int totalPriceForFruits;

	std::cin >> priceForVegetables;
	std::cin >> priceForFruits;
	std::cin >> totalPriceForVegetables;
	std::cin >> totalPriceForFruits;

	double totalVegetables = priceForVegetables * totalPriceForVegetables;
	int totalFruits = priceForFruits * totalPriceForFruits;

	int total = totalVegetables * totalFruits;

	std::cout << total << std::endl;

	// 3.

	int length1;
	double width1;
	double length;
	int width2;
	int length2;

	std::cin >> length1 >> width1 >> length >> width2 >> length2;

	int totalArea = length1 * 20;
	int benchArea = width2 * length2;
	int coverArea = totalArea - benchArea;
	int tileArea = width1 * length;
	double neccesaryTile = coverArea / tileArea;
	double neccesaryTime = neccesaryTile * 0.2;

	std::cout << neccesaryTile << std::endl;
	std::cout << neccesaryTime << std::endl;

	// 4.

	int bitcoin;
	double chineseYuan;
	double commision;
	std::cin >> bitcoin;
	std::cin >> chineseYuan;
	std::cin >> commision;

	double bitcoinToLeva = bitcoin * 1168;
	double yuanToDolar = 0.15 * chineseYuan;
	double dolarToLeva = yuanToDolar * 1.76;
	
	double euro = (bitcoinToLeva + yuanToDolar) / 1.95 - ((bitcoinToLeva + yuanToDolar) / 1.95 * commision);

	euro -= commision;
	std::cout << euro << std::endl;
	
	// 5.

	int monthDays;
	double moneyMadeInOneDay;
	double dolarToLeva;

	std::cin >> monthDays;
	std::cin >> moneyMadeInOneDay;
	std::cin >> dolarToLeva;

	int monthSalary = monthDays * moneyMadeInOneDay;
	double annualIncome = monthSalary * 12 + monthSalary * 2.5;
	double tax = annualIncome * 0.25;
	double clearAnnualIncome = annualIncome - tax;
	double salaryInLeva = clearAnnualIncome * dolarToLeva;

	double average = salaryInLeva / 365;

	std::cout << average << std::endl;


	
	system("cls");
	system("pause");

	return 0;
}