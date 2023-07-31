#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int maxof(const int a[], int n);

int main(void)
{
	printf("사람수 : ");
	int people;
	cin >> people;

	int* height = new int[people];

	srand((unsigned int)time(NULL));
	for (int i = 0; i < people; i++) {
		height[i] = 100 + rand() % 90; // 100 ~ 189값 랜덤
		printf("height[%d] = %d\n", i, height[i]);
	}

	printf("최댓값은 %d입니다.\n", maxof(height, people));
	return 0;
}

int maxof(const int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}

	return max;
}