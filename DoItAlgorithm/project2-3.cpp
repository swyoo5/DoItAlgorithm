// Ű�� ����� ���ϴ� ���α׷��� �ۼ��ϼ���.

#include <iostream>

using namespace std;

double aveof(const int a[], int n);

int main(void)
{
	printf("����� : ");
	int people;
	cin >> people;

	int* height = new int[people];

	printf("%d���� Ű�� �Է��ϼ���.\n", people);
	for (int i = 0; i < people; i++) {
		printf("height[%d] : ", i);
		cin >> height[i];
	}

	cout.precision(3);
	cout << fixed;
	cout << "Ű�� ����� " << aveof(height, people) << " �Դϴ�.\n";
	return 0;
}

double aveof(const int a[], int n)
{
	double average = 0;
	for (int i = 0; i < n; i++) {
		average += a[i];
	}
	average /= n;
	return average;
}