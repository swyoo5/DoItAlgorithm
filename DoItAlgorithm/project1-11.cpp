// ���� ������ �Է��ϰ� �ڸ����� ����ϴ� ���α׷��� �ۼ��ϼ���. ���� ��� 135�� �Է��ϸ� '�� ���� 3�ڸ��Դϴ�.'��� ����ϰ�, 1314�� �Է��ϸ� '�� ���� 4�ڸ��Դϴ�.'��� ����ϸ� �˴ϴ�.

#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	int digit = 0;
	do {
		n /= 10;
		digit++;
	} while (n > 0);

	printf("�� ���� %d�ڸ��Դϴ�.\n", digit);
	return 0;
}