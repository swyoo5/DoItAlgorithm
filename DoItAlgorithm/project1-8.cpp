// 1부터 10까지의 합은 (1 + 10) * 5와 같은 방법으로 구할 수 있습니다. '가우스의 덧셉'이라는 이 방법을 이용하여 1부터 n까지의 정수 합을 구하는 프로그램을 작성하세요.

#include <iostream>

using namespace std;

int main(void)
{
	printf("1부터 n까지의 합을 구합니다.\n");

	int n;
	printf("n값 : ");
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