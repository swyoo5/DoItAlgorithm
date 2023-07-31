// 배열 b의 모든 요소를 배열 a에 역순으로 복사하는 함수를 작성하세요(n은 요소 개수입니다.)

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void reverseCopy(int a[], const int b[], int n);
void arrShow(const int a[], int n);

int main(void)
{
	int n;
	printf("요소의 개수를 입력하세요 : ");
	cin >> n;

	int* a = new int[n];
	int* b = new int[n];

	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++) {
		b[i] = rand() % 100;
	}

	reverseCopy(a, b, n);

	printf("원본배열(b)의 요소입니다.\n");
	arrShow(b, n);

	printf("복사된 배열(a)의 요소입니다.\n");
	arrShow(a, n);
	return 0;
}

void reverseCopy(int a[], const int b[], int n)
{
	printf("요소를 역순으로 복사합니다.\n");
	for (int i = 0; i < n; i++) {
		a[i] = b[n - i - 1];
	}
	printf("복사가 끝났습니다.\n\n");
}

void arrShow(const int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl << endl;
}