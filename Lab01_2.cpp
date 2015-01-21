/*****************
 * Lab01_2		 *
 *	1/20/15		 *
 *	Danielle Brhely *
***************/
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include <iostream>
#include "string"
using namespace std;

int main(void){
	float tip1 = .15;
	float tip2 = .20;
	float billTotal = 0;
	cout << "What is your bill total? ";
	cin >> billTotal;
	cout << "Your total bill with tip is. ";
	cout << billTotal * tip1 << billTotal * tip2;
	getchar();
	return 0;

}