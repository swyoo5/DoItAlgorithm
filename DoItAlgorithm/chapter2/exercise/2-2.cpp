#include <iostream>

using namespace std;

int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int size = sizeof(a) / sizeof(a[0]);
	printf("배열 a의 요소의 개수는 %d입니다.\n", size);

	for (int i = 0; i < size; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
