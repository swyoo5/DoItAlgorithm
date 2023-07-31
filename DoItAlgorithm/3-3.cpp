#include <iostream>

using namespace std;

int search(int a[], int n, int key);

int main(void)
{
	printf("�����˻�(���ʹ�)\n");

	printf("��� ���� : ");
	int n;
	cin >> n;

	int* arr = new int[n + 1];
	for (int i = 0; i < n; i++) {
		printf("arr[%d] : ", i);
		cin >> arr[i];
	}

	printf("�˻��� : ");
	int key;
	cin >> key;

	int idx = search(arr, n, key);
	if (idx == -1)
		printf("�˻��� ����\n");
	else
		printf("%d�� arr[%d]�� �ֽ��ϴ�.\n", key, idx);

	delete[] arr;

	return 0;
}

int search(int a[], int n, int key)
{
	int i = 0;
	a[n] = key;

	while (a[i] != key) {
		i++;
	}

	return i == n ? -1 : i;
}
