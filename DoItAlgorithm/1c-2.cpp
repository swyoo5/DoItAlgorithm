#include <iostream>

using namespace std;

int main(void)
{
	int num;
	printf("2�ڸ� ����� �Է��Ͻÿ�,\n");
	
	do {
		printf("���� : ");
		cin >> num;
	} while (num < 10 || num > 99);

	printf("���� num���� %d�� �Ǿ����ϴ�.", num);
	return 0;
}