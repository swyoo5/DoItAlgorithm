#include <iostream>

using namespace std;

int main(void)
{
	printf("���簢���� ����մϴ�.\n");

	printf("���� : ");
	int height;
	cin >> height;

	printf("�ʺ� : ");
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