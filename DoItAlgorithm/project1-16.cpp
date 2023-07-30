#include <iostream>

using namespace std;

void triangleLB(int n);

int main(void)
{
	int n;
	cin >> n;

	triangleLB(n);

	return 0;
}

void triangleLB(int n)
{
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}