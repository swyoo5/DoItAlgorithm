// �迭 ��Ҹ� �������� �����ϴ� ������ ������ ����ϵ��� 2-7���α׷��� �����ϼ���.

#include <iostream>
#include <algorithm>

using namespace std;

void arrReverse(int a[], int n);

int main(void)
{
	int num;
	printf("��� ���� : ");
	cin >> num;

	int* x = new int[num];
	for (int i = 0; i < num; i++) {
		printf("x[%d] : ", i);
		cin >> x[i];
	}
	arrReverse(x, num);
	return 0;
}

void arrReverse(int a[], int n)
{
	for (int i = 0; i < n / 2; i++) {
		swap(a[i], a[n - i - 1]);
		for (int j = 0; j < n; j++) {
			cout << a[j] << ' ';
		}
		cout << endl;
		printf("a[%d], a[%d]�� ��ȯ�մϴ�.\n", i, n - i - 1);
	}
}