// 1���� 10������ ���� (1 + 10) * 5�� ���� ������� ���� �� �ֽ��ϴ�. '���콺�� ����'�̶�� �� ����� �̿��Ͽ� 1���� n������ ���� ���� ���ϴ� ���α׷��� �ۼ��ϼ���.

#include <iostream>

using namespace std;

int main(void)
{
	printf("1���� n������ ���� ���մϴ�.\n");

	int n;
	printf("n�� : ");
	cin >> n;

	int sum;
	if (n % 2 == 0) {
		sum = (1 + n) * (n / 2);
	}
	else {
		sum = (1 + n) * (n / 2) + (n / 2 + 1);
	}

	cout << sum << endl;
	return 0;
}