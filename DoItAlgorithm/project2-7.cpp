// �迭 b�� ��� ��Ҹ� �迭 a�� �����ϴ� �Լ��� �ۼ��ϼ���(n�� ��� �����Դϴ�.)

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void arrCopy(int a[], const int b[], int n);
void arrShow(const int a[], int n);

int main(void)
{
	int n;
	cout << "����� ������ �Է��ϼ���.";
	cin >> n;

	int* a = new int[n];
	int* b = new int[n];

	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++) {
		b[i] = rand() % 100;
	}

	printf("b�� ��� ��Ҹ� a�� �����մϴ�.\n\n");
	arrCopy(a, b, n);

	printf("b(����)�� ��Ҵ� ������ �����ϴ�.\n");
	arrShow(b, n);

	printf("a�� ��Ҵ� ������ �����ϴ�.\n");
	arrShow(a, n);

	delete[] a;
	delete[] b;

	return 0;
}

void arrCopy(int a[], const int b[], int n)
{
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}
}

void arrShow(const int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl << endl;
}