#include <iostream>

using namespace std;

int main(void)
{
	int num;
	printf("2자리 양수를 입력하시오,\n");
	
	do {
		printf("수는 : ");
		cin >> num;
	} while (num < 10 || num > 99);

	printf("변수 num값은 %d가 되었습니다.", num);
	return 0;
}
