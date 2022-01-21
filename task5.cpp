#include <iostream>
#include <cmath>
void f();
double x, result;
void main()
{
	using namespace std;
	cout << "x=";
	cin >> x;
	f();
	cout << "f=" << result << endl;
}

void f()
{
	result = (sin(4 * x) / (1 + cos(4 * x))) / (cos(2 * x) / (1 + cos(2 * x)));
}