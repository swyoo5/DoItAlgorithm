#include <iostream>

using namespace std;

int binarySearch(const int a[], int n, int key);

int main(void)
{
	int n;

	printf("���� �˻�\n");
	printf("��� ���� : ");
	cin >> n;

	printf("������������ �Է��ϼ���.\n");

	int* arr = new int[n];

	printf("arr[0] : ");
	cin >> arr[0];

	for (int i = 1; i < n; i++) {
		do {
			printf("arr[%d] : ", i);
			cin >> arr[i];
		} while (arr[i - 1] > arr[i]);
	}

	printf("�˻��� : ");
	int key;
	cin >> key;

	int index = binarySearch(arr, n, key);
	if (index == -1) {
		printf("�˻��� �����߽��ϴ�.\n");
	}
	else {
		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", key, index);
	}
	return 0;
}

int binarySearch(const int a[], int n, int key)
{
	int left = 0;
	int right = n - 1;

	do {
		int center = (left + right) / 2;
		if (a[center] == key) return center;
		else if (a[center] < key) left = center + 1;
		else right = center - 1;
	} while (left <= right);
	return -1;
}