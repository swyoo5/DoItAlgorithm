#include <iostream>

using namespace std;

int main(void)
{
	printf("���簢���� �߷��մϴ�,\n");
	printf("�Է��� �� : ");

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