#include <iostream>
using namespace std;
float a, b, c, d, e, f, x, y, q, p, l, m, n, r, o, t;
int main()
{
	cout << "sistema de ecuaciones a resolver: " << endl;
	cout << "ax+by=c" << endl;
	cout << "dx+ey=f" << endl;
	cout << "ingresar los valores que deseas que tenga el sistema de ecuaciones " << " :" << endl;
	cout << "ingresar el valor que deseas que tenga a" << ":";
	cin >> a;
	cout << "ingresar el valor que deseas que tenga b" << ":";
	cin >> b;
	cout << "ingresar el valor que deseas que tenga c" << ":";
	cin >> c;
	cout << "ingresar el valor que deseas que tenga d" << ":";
	cin >> d;
	cout << "ingresar el valor que deseas que tenga e" << ":";
	cin >> e;
	cout << "ingresar el valor que deseas que tenga f" << ":";
	cin >> f;
	y = ((c * d) - (f * a)) / ((d * b) - (a * e));
	cout << "valor de y=" << y << endl;
	x = (c - (b * y)) / a;
	cout << "valor de x=" << x << endl;

}