// 2-5를 수정하여 키의 합계를 구하는 프로그램을 작성하세요.

#include <iostream>

using namespace std;

int sumof(const int a[], int n);

int main(void)
{
	printf("사람수 : ");
	int people;
	cin >> people;

	int* height = new int[people];
	printf("%d명의 키를 입력하세요.\n", people);

	for (int i = 0; i < people; i++) {
		printf("height[%d] : ", i);
		cin >> height[i];
	}
	printf("키의 합계는 %d입니다.\n", sumof(height, people));
	delete[] height;
	return 0;
}

int sumof(const int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	return sum;
}
