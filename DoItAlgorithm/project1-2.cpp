// �� ������ �ּڰ��� ���ϴ� min3�Լ��� �ۼ��ϼ���.

#include <iostream>

using namespace std;

int min3(int a, int b, int c);

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	cout << min3(a, b, c) << endl;
	return 0;
}

int min3(int a, int b, int c)
{
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	return min;
}