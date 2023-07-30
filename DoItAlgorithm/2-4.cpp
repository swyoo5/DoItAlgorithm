#include <iostream>

using namespace std;

int main(void)
{
	printf("요소의 개수 : ");
	int n;
	cin >> n;

	int* a = new int[n];

	if (a == nullptr) {
		cout << "메모리 할당에 실패했습니다.\n";
	}
	else {
		printf("%d개의 정수를 입력하세요.\n", n);
		for (int i = 0; i < n; i++) {
			printf("a[%d] : ", i);
			cin >> a[i];
		}
		printf("각 요소의 값\n");

		for (int i = 0; i < n; i++) {
			printf("a[%d] = %d\n", i, a[i]);
		}
	}
	return 0;
}