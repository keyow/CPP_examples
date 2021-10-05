#pragma once

#include <cassert>
#include <iostream>

/*  
	-------------------------------------
	Asserts work during program execution 
	Static asserts work during compilation 
	Static asserts work with r-values and 
	constant expressions (constexpr), that
	are defined during compilation.
	-------------------------------------
*/

using namespace std;

void asserts()
{
	const int a = 0;
	const int b = 4;

	assert(a > b && "a < b?");

	std::cout << "All asserts are passed now." << std::endl;
}