// The max or min value in an array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// min value
	double values[5] = { 2, 4, 9, 8, 3 };
	double min = values[0];

	for (int i = 1; i < 5; i++) {
		if (values[i] < min) {
			min = values[i];
		}
	}
	cout << "Minimum VALUE : " << min << endl;


	// max value

	double max = values[0];

	for (int i = 1; i < 5; i++) {
		if (values[i] > max) {
			max = values[i];
		}
	}
	cout << "MAX VALUE : " << max << endl;

    return 0;
}

