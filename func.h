#pragma once
#include <iostream>

extern double x;
extern double result;
static void f()
{
	result = (sin(4 * x) / (1 + cos(4 * x))) / (cos(2 * x) / (1 + cos(2 * x)));
}
