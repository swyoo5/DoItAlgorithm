// 2-5�� �����Ͽ� Ű�� �հ踦 ���ϴ� ���α׷��� �ۼ��ϼ���.

#include <iostream>

using namespace std;

int sumof(const int a[], int n);

int main(void)
{
	printf("����� : ");
	int people;
	cin >> people;

	int* height = new int[people];
	printf("%d���� Ű�� �Է��ϼ���.\n", people);

	for (int i = 0; i < people; i++) {
		printf("height[%d] : ", i);
		cin >> height[i];
	}
	printf("Ű�� �հ�� %d�Դϴ�.\n", sumof(height, people));
	delete[] height;
	return 0;
}

int sumof(const int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	return sum;
}