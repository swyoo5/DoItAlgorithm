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
	return 0;
}

int search(const int a[], int n, int key)
{
	int i = 0;
	while (1) {
		if (i == n) {
			return -1;
		}
		else if (a[i] == key) {
			return i;
		}
		i++;
	}
}