#include <iostream>

using namespace std;

int main(void)
{
	int a[5];
	for (int i = 0; i < 5; i++) {
		printf("a[%d] : ", i);
		cin >> a[i];
	}

	printf("각 요소의 값\n");
	for (int i = 0; i < 5; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}