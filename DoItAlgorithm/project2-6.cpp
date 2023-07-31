#include <iostream>

using namespace std;

void baseConversion(int num, const int base);

int main(void)
{
	printf("10������ ��� ��ȯ�մϴ�.\n");

	int retry = 0;
	do {
		int num;
		printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
		cin >> num;

		int base;
		printf("� ������ ��ȯ�ұ��? (2 - 36) : ");
		cin >> base;

		baseConversion(num, base);

		printf("�ѹ� �� �ұ��? (�� : 1, �ƴϿ� : 0) : ");
		cin >> retry;
	} while (retry == 1);
	
	return 0;
}

void baseConversion(int num, const int base)
{
	string digitNum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string result = "";
	do {
		printf("%d | %7d ���� %c\n", base, num, digitNum[num % base]);
		printf("   +-------------\n");
		result = digitNum[num % base] + result;
		num /= base;
	} while (num > 0);
	printf("           0\n");

	cout << base << "������ " << result << " �Դϴ�." << endl;
}