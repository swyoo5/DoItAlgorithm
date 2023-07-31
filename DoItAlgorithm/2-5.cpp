#include <iostream>

using namespace std;

int maxof(const int a[], int n);

int main(void)
{
	printf("����� : ");
	int people;
	cin >> people;

	int* height = new int[people];
	printf("%d���� ����� Ű�� �Է��ϼ���.\n", people);

	for (int i = 0; i < people; i++) {
		printf("height[%d] : ", i);
		cin >> height[i];
	}
	printf("�ִ��� %d�Դϴ�.\n", maxof(height, people));
	delete[] height;

	return 0;
}

int maxof(const int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}

	return max;
}