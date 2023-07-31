// �迭 a�� ��� ����� ������ �ڼ��� shuffle�Լ��� �ۼ��ϼ���(n�� ����� �����Դϴ�.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

void shuffle(int a[], int n);
void showArr(int a[], int n);

int main(void)
{
	int n;
	printf("�迭�� ������ ���� : ");
	cin >> n;

	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
	printf("������ �ڼ��� ��\n");
	showArr(a, n);

	shuffle(a, n);

	printf("������ ���� ��\n");
	showArr(a, n);

	delete[] a;
	return 0;
}

void shuffle(int a[], int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++) {
		swap(a[i], a[rand() % n]);
	}
}

void showArr(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl << endl;
}