#include <iostream>

using namespace std;

int binarySearch(const int a[], int n, int key);

int main(void)
{
	int n;

	printf("이진 검색\n");
	printf("요소 개수 : ");
	cin >> n;

	printf("오름차순으로 입력하세요.\n");

	int* arr = new int[n];

	printf("arr[0] : ");
	cin >> arr[0];

	for (int i = 1; i < n; i++) {
		do {
			printf("arr[%d] : ", i);
			cin >> arr[i];
		} while (arr[i - 1] > arr[i]);
	}

	printf("검색값 : ");
	int key;
	cin >> key;

	int index = binarySearch(arr, n, key);
	if (index == -1) {
		printf("검색에 실패했습니다.\n");
	}
	else {
		printf("%d는 x[%d]에 있습니다.\n", key, index);
	}
	return 0;
}

int binarySearch(const int a[], int n, int key)
{
	int left = 0;
	int right = n - 1;

	do {
		int center = (left + right) / 2;
		if (a[center] == key) return center;
		else if (a[center] < key) left = center + 1;
		else right = center - 1;
	} while (left <= right);
	return -1;
}