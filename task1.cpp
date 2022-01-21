#include <iostream>
#include <cmath>
void main()
{
	setlocale(LC_ALL, "ru");
	double x;
	x = 3;
	std::cout << x << std::endl;
	double f = (sin(4 * x) / (1 + cos(4 * x))) / (cos(2 * x) / (1 + cos(2 * x)));
	std::cout << "f = " << f << std::endl;

	
	std::cout << "¬ведите значение x: " << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	f = (sin(4 * x) / (1 + cos(4 * x))) / (cos(2 * x) / (1 + cos(2 * x)));
	std::cout << "f = " << f << std::endl;
}
