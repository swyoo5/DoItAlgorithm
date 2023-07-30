#include <iostream>

using namespace std;

void nrpira(int n);

int main(void)
{
	int n;
	cin >> n;

	nrpira(n);

	return 0;
}

void nrpira(int n)
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= 2 * (n - i) + 1; j++) {
			printf("%d", i % 10);
		}
		printf("\n");
	}
	printf("\n");
}