#include <iostream>

using namespace std;

int main(void)
{
	printf("1���� n������ ������ ���մϴ�.\n");

	int n;
	printf("n�� : ");
	cin >> n;

	int sum = 1;
	printf("1 ");

	for (int i = 2; i <= n; i++) {
		printf("+ %d ", i);
		sum += i;
	}

	printf("= %d\n", sum);
	return 0;
}