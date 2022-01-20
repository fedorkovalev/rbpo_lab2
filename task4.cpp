#include <iostream>

void f(const double& x, double& result);

void main()
{
	using namespace std;
	double x, result;
	cout << "x=";
	cin >> x;
	f(x, result);
	cout << "f=" << result << endl;
}

void f(const double& x, double& result)
{
	result = (sin(4 * x) / (1 + cos(4 * x))) / (cos(2 * x) / (1 + cos(2 * x)));
}