// ������ ���� �� ���� a, b�� ������ �Է��ϰ� b - a�� ����ϴ� ���α׷��� �ۼ��ϼ���.
// a�� : 6
// b�� : 6
// a���� ū ���� �Է��ϼ���!
// b�� : 8
// b - a�� 2�Դϴ�.

#include <iostream>

using namespace std;

int main(void)
{
	int a, b;
	printf("a�� : ");
	cin >> a;

	do {
		printf("b�� : ");
		cin >> b;

		if (b <= a) printf("a���� ū ���� �Է��ϼ���!\n");
	} while (b <= a);

	int result = b - a;
	printf("b - a�� %d�Դϴ�.\n", result);
	return 0;
}