// Ű�� �ּڰ��� ���ϴ� ���α׷��� �ۼ��ϼ���
// int minof(const int a[], int n);

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int minof(const int a[], int n);

int main(void)
{
	printf("����� : ");
	int people;
	cin >> people;

	int* height = new int[people];

	srand((unsigned)time(NULL));
	for (int i = 0; i < people; i++) {
		height[i] = 100 + rand() % 90;
		printf("height[%d] : %d\n", i, height[i]);
	}

	printf("�ּڰ��� %d �Դϴ�.", minof(height, people));
	return 0;
}

int minof(const int a[], int n)
{
	int min = a[0];

	for (int i = 1; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}

	return min;
}