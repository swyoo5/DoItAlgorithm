// 키의 평균을 구하는 프로그램을 작성하세요.

#include <iostream>

using namespace std;

double aveof(const int a[], int n);

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

	cout.precision(3);
	cout << fixed;
	cout << "키의 평균은 " << aveof(height, people) << " 입니다.\n";
	return 0;
}

double aveof(const int a[], int n)
{
	double average = 0;
	for (int i = 0; i < n; i++) {
		average += a[i];
	}
	average /= n;
	return average;
}
