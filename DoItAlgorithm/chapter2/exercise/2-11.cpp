#include <iostream>

using namespace std;

int main(void)
{
	int prime[500];
	int point = 0;
	unsigned long count = 0;

	prime[point++] = 2;
	prime[point++] = 3;

	for (int i = 5; i <= 1000; i += 2) {
		int j;
		int isPrime = 1;
		for (j = 1; count++, prime[j] * prime[j] <= i; j++) {
			count++;
			if (i % prime[j] == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) prime[point++] = i;
	}

	for (int i = 0; i < point; i++) {
		printf("%d\n", prime[i]);
	}

	printf("¿¬»ê(°ö¼À, ³ª´°¼À) È½¼ö : %d\n", count);
	return 0;
}
