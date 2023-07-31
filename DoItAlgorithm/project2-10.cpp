// calcDay함수를 변수 i와 day를 사용하지 않고 구현하세요. 또한 for문이 아닌 while문을 사용하세요.

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
		printf("연도 : ");
		cin >> year;

		printf("월 : ");
		cin >> month;

		printf("일 : ");
		cin >> day;

		printf("%d년의 %d일 째입니다.\n", year, calcDay(year, month, day));

		printf("다시 할까요? (예 : 1, 아니오 : 0) ");
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
	while (month--) {
		day += monthDay[isLeap(year)][month - 1];
	}
	return day;
}