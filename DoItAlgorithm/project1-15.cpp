#include <iostream>

using namespace std;

int main(void)
{
	printf("직사각형을 출력합니다.\n");

	printf("높이 : ");
	int height;
	cin >> height;

	printf("너비 : ");
	int width;
	cin >> width;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}