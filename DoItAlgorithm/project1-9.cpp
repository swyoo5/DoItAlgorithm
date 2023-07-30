// 정수 a, b를 포함하여 그 사이의 모든 정수의 합을 구하는 아래 함수를 작성하세요.
// int sumof(int a, int b);

#include <iostream>

using namespace std;

int sumof(int a, int b);

int main(void)
{
	int a, b;
	cin >> a >> b;

	cout << sumof(a, b) << endl;
	return 0;
}

int sumof(int a, int b)
{
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}

	return sum;
}