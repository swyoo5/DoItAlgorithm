// 다음과 같이 두 뱐수 a, b에 정수를 입력하고 b - a를 출력하는 프로그램을 작성하세요.
// a값 : 6
// b값 : 6
// a보다 큰 값을 입력하세요!
// b값 : 8
// b - a는 2입니다.

#include <iostream>

using namespace std;

int main(void)
{
	int a, b;
	printf("a값 : ");
	cin >> a;

	do {
		printf("b값 : ");
		cin >> b;

		if (b <= a) printf("a보다 큰 값을 입력하세요!\n");
	} while (b <= a);

	int result = b - a;
	printf("b - a는 %d입니다.\n", result);
	return 0;
}