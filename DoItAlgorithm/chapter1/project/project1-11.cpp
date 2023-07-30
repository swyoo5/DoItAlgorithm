// 양의 정수를 입력하고 자릿수를 출력하는 프로그램을 작성하세요. 예를 들어 135를 입력하면 '그 수는 3자리입니다.'라고 출력하고, 1314를 입력하면 '그 수는 4자리입니다.'라고 출력하면 됩니다.

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

	printf("그 수는 %d자리입니다.\n", digit);
	return 0;
}
