#include <iostream>

using namespace std;

int search(const int a[], int n, int key);

int main(void)
{
	printf("�����˻�\n");

	printf("��� ���� : ");
	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		printf("arr[%d] : ", i);
		cin >> arr[i];
	}

	printf("�˻��� : ");
	int key;
	cin >> key;

	printf("%d��(��) arr[%d]�� �ֽ��ϴ�.\n", key, search(arr, n, key));
	delete[] arr;

	return 0;
}

int search(const int a[], int n, int key)
{
	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			return i;
		}
	}
	return -1;
}