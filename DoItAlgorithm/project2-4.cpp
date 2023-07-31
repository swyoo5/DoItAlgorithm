// 2-6은 키를 난수로 생성한 후 키의 최댓값을 구하는 프로그램입니다, 키와 함께 사람수도 난수로 생성하도록 수정하여 프로그램을 작성하세요.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int maxof(const int a[], int n);

int main(void)
{
	srand((unsigned)time(NULL));
	int people = rand() % 90;
	printf("사람수 : %d명\n", people);

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