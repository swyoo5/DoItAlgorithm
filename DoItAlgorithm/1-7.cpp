#include <iostream>

using namespace std;

int main(void)
{
	int n;
	printf("1���� n������ ������ ���մϴ�.\n");

	printf("n�� : ");
	cin >> n;

	int sum = 0;
	int i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}

	printf("1���� %d������ ������ %d�Դϴ�.\n", n, sum);
	return 0;
}