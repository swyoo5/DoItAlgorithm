#include <iostream>

using namespace std;

int main(void)
{
	printf("����� ���� : ");
	int n;
	cin >> n;

	int* a = new int[n];

	if (a == nullptr) {
		cout << "�޸� �Ҵ翡 �����߽��ϴ�.\n";
	}
	else {
		printf("%d���� ������ �Է��ϼ���.\n", n);
		for (int i = 0; i < n; i++) {
			printf("a[%d] : ", i);
			cin >> a[i];
		}
		printf("�� ����� ��\n");

		for (int i = 0; i < n; i++) {
			printf("a[%d] = %d\n", i, a[i]);
		}
	}
	return 0;
}