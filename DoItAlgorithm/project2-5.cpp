// 배열 요소를 역순으로 정렬하는 과정을 일일이 출력하도록 2-7프로그램을 수정하세요.

#include <iostream>
#include <algorithm>

using namespace std;

void arrReverse(int a[], int n);

int main(void)
{
	int num;
	printf("요소 개수 : ");
	cin >> num;

	int* x = new int[num];
	for (int i = 0; i < num; i++) {
		printf("x[%d] : ", i);
		cin >> x[i];
	}
	arrReverse(x, num);
	return 0;
}

void arrReverse(int a[], int n)
{
	for (int i = 0; i < n / 2; i++) {
		swap(a[i], a[n - i - 1]);
		for (int j = 0; j < n; j++) {
			cout << a[j] << ' ';
		}
		cout << endl;
		printf("a[%d], a[%d]를 교환합니다.\n", i, n - i - 1);
	}
}