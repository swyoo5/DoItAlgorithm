// 배열 b의 모든 요소를 배열 a에 복사하는 함수를 작성하세요(n은 요소 개수입니다.)

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void arrCopy(int a[], const int b[], int n);
void arrShow(const int a[], int n);

int main(void)
{
	int n;
	cout << "요소의 개수를 입력하세요.";
	cin >> n;

	int* a = new int[n];
	int* b = new int[n];

	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++) {
		b[i] = rand() % 100;
	}

	printf("b의 모든 요소를 a에 복사합니다.\n\n");
	arrCopy(a, b, n);

	printf("b(원본)의 요소는 다음과 같습니다.\n");
	arrShow(b, n);

	printf("a의 요소는 다음과 같습니다.\n");
	arrShow(a, n);

	delete[] a;
	delete[] b;

	return 0;
}

void arrCopy(int a[], const int b[], int n)
{
	for (int i = 0; i < n; i++) {
		a[i] = b[i];
	}
}

void arrShow(const int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl << endl;
}