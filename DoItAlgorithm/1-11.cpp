#include <iostream>

using namespace std;

int main(void)
{
	int n;

	do {
		printf("��� �ﰢ���Դϱ�?");
		cin >> n;
	} while (n <= 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}