// 네 정수의 최댓값을 구하는 함수 max4를 작성하세요,
//int max4(int a, int b, int c, int d);

#include <iostream>

using namespace std;

int max4(int a, int b, int c, int d);

int main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << max4(a, b, c, d);
	return 0;
}

int max4(int a, int b, int c, int d)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;

	return max;
}