#include <iostream>

using namespace std;

int maxof(const int a[], int n);

int main(void)
{
	printf("사람수 : ");
	int people;
	cin >> people;

	int* height = new int[people];
	printf("%d명의 사람의 키를 입력하세요.\n", people);

	for (int i = 0; i < people; i++) {
		printf("height[%d] : ", i);
		cin >> height[i];
	}
	printf("최댓값은 %d입니다.\n", maxof(height, people));
	delete[] height;

	return 0;
}

int maxof(const int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}

	return max;
}
