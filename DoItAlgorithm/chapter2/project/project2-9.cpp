// 배열 a의 모든 요소의 순서를 뒤섞는 shuffle함수를 작성하세요(n은 요소의 개수입니다.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

void shuffle(int a[], int n);
void showArr(int a[], int n);

int main(void)
{
	int n;
	printf("배열의 원소의 개수 : ");
	cin >> n;

	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
	printf("순서를 뒤섞기 전\n");
	showArr(a, n);

	shuffle(a, n);

	printf("순서를 섞은 후\n");
	showArr(a, n);

	delete[] a;
	return 0;
}

void shuffle(int a[], int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++) {
		swap(a[i], a[rand() % n]);
	}
}

void showArr(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl << endl;
}
