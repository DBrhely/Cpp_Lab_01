// Lab01_1
// 1/20/15
// Danielle Brhely


#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include <iostream>
#include "string"
using namespace std;
string favor_1 = "";
string favor_2 = "";
int main(void){
	cout << "What is your favorite first favorite food?" << endl;
	cin >> favor_1;
	cout << "What is your second favorite food?" << endl;
	cin >> favor_2;
	cout << "Your two favorite foods are " << favor_1 << "and " << favor_2;
	getchar();
	return 0;
}
