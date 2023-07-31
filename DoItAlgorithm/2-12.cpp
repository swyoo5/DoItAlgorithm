#include <iostream>

using namespace std;

int monthDay[2][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int isLeap(int year);
int calcDay(int year, int month, int day);

int main(void)
{
	int retry = 0;
	int year, month, day;
	do {
		printf("���� : ");
		cin >> year;

		printf("�� : ");
		cin >> month;

		printf("�� : ");
		cin >> day;

		printf("%d���� %d�� °�Դϴ�.\n", year, calcDay(year, month, day));

		printf("�ٽ� �ұ��? (�� : 1, �ƴϿ� : 0) ");
		cin >> retry;
	} while (retry == 1);
	return 0;
}

int isLeap(int year)
{
	return ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
}

int calcDay(int year, int month, int day)
{
	int result = day;
	for (int i = 1; i < month; i++) {
		result += monthDay[isLeap(year)][i - 1];
	}
	return result;
}