/*************************** 
  Lab01_4 
  1/21/15
  Danielle Brhely
 ************************/



#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include <iostream>
#include "string"
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(void){
	srand(time(NULL));

	int number = rand() % 5 + 1;
	if (number == 1){
		cout << "You will be a good C++ programmer!" << endl;
	}
	else if (number == 2){
		cout << "In about a week, you will do something great." << endl;
	}
	else if (number == 3){
		cout << "Be careful what you say or you will reget it." << endl;
	}
	else if (number == 4){
		cout << "Something will happen in your life." << endl;
	}
	else if (number == 5){
		cout << "Remember what your teacher said about something that he said you will forget about." << endl;
	}
	getchar();
	return 0;
}