#include <iostream>

using namespace std;

int main(void)
{
	int prime[500];
	int point = 0;
	unsigned long count = 0;

	prime[point++] = 2;
	for (int i = 3; i <= 1000; i += 2) {
		int j;
		for (j = 1; j < point; j++) {
			count++;
			if (i % prime[j] == 0) break;
		}
		if (j == point) prime[point++] = i;
	}

	for (int i = 0; i < point; i++) {
		cout << prime[i] << endl;
	}
	printf("³ª´°¼À ½ÇÇàÈ½¼ö : %d", count);
	return 0;
}
