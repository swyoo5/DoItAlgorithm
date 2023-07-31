#include <iostream>

using namespace std;

int main(void)
{
	printf("정사각형을 추력합니다,\n");
	printf("입력할 수 : ");

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
