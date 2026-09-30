// compound_interest.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double principal, rate, amount;
    int years, compoundsPerYear;

	std::cout << "Enter the principal(starting) amount: ";
	std::cin >> principal;

	std::cout << "Enter the annual interest rate (as a percentage): ";
	std::cin >> rate;

	std::cout << "Enter the number of years: ";
	std::cin >> years;

	std::cout << "Enter the number of times interest is compounded per year: ";
	std::cin >> compoundsPerYear;

	rate /= 100; // Convert percentage to decimal

	amount = principal * pow((1 + rate / compoundsPerYear), compoundsPerYear * years);

	std::cout << std::fixed <<  std::setprecision(2) <<"final amount is :"<< amount;


    return 0;
}

