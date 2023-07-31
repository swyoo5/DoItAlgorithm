#include <iostream>

using namespace std;

int main(void)
{
	int n;

	do {
		printf("¸î´Ü »ï°¢ÇüÀÔ´Ï±î?");
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
