// ���� a, b�� �����Ͽ� �� ������ ��� ������ ���� ���ϴ� �Ʒ� �Լ��� �ۼ��ϼ���.
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