#include <iostream>

using namespace std;

int main(void)
{
	printf("1부터 n까지의 총합을 구합니다.\n");

	int n;
	do {
		printf("n값 : ");
		cin >> n;
	} while (n <= 0);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	printf("1부터 %d까지의 총 합은 %d입니다.", n, sum);
	return 0;
}