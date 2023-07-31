#include <iostream>

using namespace std;

void baseConversion(int num, const int base);

int main(void)
{
	printf("10진수를 기수 변환합니다.\n");

	int retry = 0;
	do {
		int num;
		printf("변환하는 음이 아닌 정수 : ");
		cin >> num;

		int base;
		printf("어떤 진수로 뱐환할까요? (2 - 36) : ");
		cin >> base;

		baseConversion(num, base);

		printf("한번 더 할까요? (예 : 1, 아니오 : 0) : ");
		cin >> retry;
	} while (retry == 1);
	
	return 0;
}

void baseConversion(int num, const int base)
{
	string digitNum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string result = "";
	do {
		printf("%d | %7d ·· %c\n", base, num, digitNum[num % base]);
		printf("   +-------------\n");
		result = digitNum[num % base] + result;
		num /= base;
	} while (num > 0);
	printf("           0\n");

	cout << base << "진수로 " << result << " 입니다." << endl;
}