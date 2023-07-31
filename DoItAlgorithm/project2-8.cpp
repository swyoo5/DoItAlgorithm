// �迭 b�� ��� ��Ҹ� �迭 a�� �������� �����ϴ� �Լ��� �ۼ��ϼ���(n�� ��� �����Դϴ�.)

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void reverseCopy(int a[], const int b[], int n);
void arrShow(const int a[], int n);

int main(void)
{
	int n;
	printf("����� ������ �Է��ϼ��� : ");
	cin >> n;

	int* a = new int[n];
	int* b = new int[n];

	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++) {
		b[i] = rand() % 100;
	}

	reverseCopy(a, b, n);

	printf("�����迭(b)�� ����Դϴ�.\n");
	arrShow(b, n);

	printf("����� �迭(a)�� ����Դϴ�.\n");
	arrShow(a, n);
	return 0;
}

void reverseCopy(int a[], const int b[], int n)
{
	printf("��Ҹ� �������� �����մϴ�.\n");
	for (int i = 0; i < n; i++) {
		a[i] = b[n - i - 1];
	}
	printf("���簡 �������ϴ�.\n\n");
}

void arrShow(const int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl << endl;
}