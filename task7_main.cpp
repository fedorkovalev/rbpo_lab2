#include <iostream>
extern void f();
extern double x, result;
void main()
{
	using namespace std;
	cout << "x=";
	cin >> x;
	f();
	cout << "f=" << result << endl;
}