#include <iostream>

using namespace std;

void spira(int n);

int main(void)
{
	int n;
	cin >> n;

	spira(n);

	return 0;
}

void spira(int n)
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}

		printf("\n");
	}
	printf("\n");
}
