/*******************
 Lab01_3
 1/21/15
 Danielle Brhely
 *******************/


#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include <iostream>
#include "string"
using namespace std;

int main(void){
	float basePrice = 0;
	float tax = basePrice * .100;
	float license = basePrice * .100;
	float dealerPrep = .10;
	float destinationCharge = .15;
	float priceTotal = basePrice + tax + license + dealerPrep + destinationCharge;

	cout << "What is the base price of your car? ";
	cin >> basePrice;
	cout << "Here is the your fee on the car." << tax << license << dealerPrep << destinationCharge;
	cout << "Here is your total on the car." << priceTotal;

	getchar();
	return 0;
}