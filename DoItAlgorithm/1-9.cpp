#include <iostream>

using namespace std;

int main(void)
{
	printf("1���� n������ ������ ���մϴ�.\n");

	int n;
	do {
		printf("n�� : ");
		cin >> n;
	} while (n <= 0);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	printf("1���� %d������ �� ���� %d�Դϴ�.", n, sum);
	return 0;
}