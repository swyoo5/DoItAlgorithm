// 2-6�� Ű�� ������ ������ �� Ű�� �ִ��� ���ϴ� ���α׷��Դϴ�, Ű�� �Բ� ������� ������ �����ϵ��� �����Ͽ� ���α׷��� �ۼ��ϼ���.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int maxof(const int a[], int n);

int main(void)
{
	srand((unsigned)time(NULL));
	int people = rand() % 90;
	printf("����� : %d��\n", people);

	int* height = new int[people];

	srand((unsigned int)time(NULL));
	for (int i = 0; i < people; i++) {
		height[i] = 100 + rand() % 90; // 100 ~ 189�� ����
		printf("height[%d] = %d\n", i, height[i]);
	}

	printf("�ִ��� %d�Դϴ�.\n", maxof(height, people));
	return 0;
}

int maxof(const int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}

	return max;
}