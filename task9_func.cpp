#include "func9.h"
#include <cmath>
double x, result;
namespace Kovalev
{
	void f()
	{
		result = (sin(4 * x) / (1 + cos(4 * x))) / (cos(2 * x) / (1 + cos(2 * x)));
	}
}