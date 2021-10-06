#pragma once

#include <iostream>
#include <cstdarg>

using namespace std;

/*
	-------------------------------------
	To use ellipsis we have to import 
	<cstdarg>. 
	Ellipsis is dangerous!
	We have to one exact type of all
	elements from va_list!
	-------------------------------------
*/

double findAverage(int c, ...)
{
	double sum = 0;
	va_list list;
	va_start(list, c);

	for (int arg = 0; arg < c; arg++)
		sum += va_arg(list, int);

	va_end(list);
	return sum / c;
}

void ellipsis()
{
	cout << findAverage(4, 1, 2, 3, 4) << endl;
	cout << findAverage(5, 1, 2, 5, 1, 7) << endl;
}