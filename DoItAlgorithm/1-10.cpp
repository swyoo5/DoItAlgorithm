#include <iostream>

using namespace std;

int main(void)
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%3d", i * j);
		}
		printf("\n");
	}
	return 0;
}