// 네 정수의 최솟값을 구하는 min4함수를 작성하세요.

#include <iostream>

using namespace std;

int min4(int a, int b, int c, int d);

int main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << min4(a, b, c, d) << endl;

	return 0;
}

int min4(int a, int b, int c, int d)
{
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	if (min > d) min = d;

	return min;
}
