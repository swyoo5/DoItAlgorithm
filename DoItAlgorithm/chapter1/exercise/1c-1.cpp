#include <iostream>

using namespace std;

int med3(int a, int b, int c);

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	cout << med3(a, b, c) << endl;
	return 0;
}

int med3(int a, int b, int c)
{
	int med;
	if (a >= b)
		if (b >= c)
			med = b; // a b c
		else if (c >= a)
			med = a; // c a b
		else
			med = c; // a c b
	else if (a > c)
		med = a;	// b a c
	else if (c > a)
		med = c;	// b c a
	else
		med = b;	// c b a
	return med;
}
