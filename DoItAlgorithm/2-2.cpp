#include <iostream>

using namespace std;

int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int size = sizeof(a) / sizeof(a[0]);
	printf("�迭 a�� ����� ������ %d�Դϴ�.\n", size);

	for (int i = 0; i < size; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}