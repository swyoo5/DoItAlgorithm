// ��Ұ� n���� �迭 a���� key�� ��ġ�ϴ� ��� ����� �ε����� �迭 idx�� �� �պκк��� ������� �����ϰ� ��ġ�� ����� ������ ��ȯ�ϴ� �Լ��� �ۼ��Ͻÿ�.

#include <iostream>

using namespace std;

int search_idx(const int a[], int n, int key, int idx[]);

int main(void)
{
	int a[8] = { 1, 9, 2, 9, 4, 6, 7, 9 };
	int idx[8] = { 0 };
	cout << search_idx(a, 8, 9, idx);
	return 0;
}

int search_idx(const int a[], int n, int key, int idx[])
{
	int idxIndex = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			idx[idxIndex++] = i;
		}
	}

	return idxIndex;
}