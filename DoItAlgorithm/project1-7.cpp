#include <iostream>

using namespace std;

int main(void)
{
	printf("1부터 n까지의 총합을 구합니다.\n");

	int n;
	printf("n값 : ");
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