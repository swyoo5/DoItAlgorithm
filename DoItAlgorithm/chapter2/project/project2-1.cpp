// 키의 최솟값을 구하는 프로그램을 작성하세요
// int minof(const int a[], int n);

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int minof(const int a[], int n);

int main(void)
{
	printf("사람수 : ");
	int people;
	cin >> people;

	int* height = new int[people];

	srand((unsigned)time(NULL));
	for (int i = 0; i < people; i++) {
		height[i] = 100 + rand() % 90;
		printf("height[%d] : %d\n", i, height[i]);
	}

	printf("최솟값은 %d 입니다.", minof(height, people));
	return 0;
}

int minof(const int a[], int n)
{
	int min = a[0];

	for (int i = 1; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}

	return min;
}
