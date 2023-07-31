#include <iostream>

using namespace std;

int search(int a[], int n, int key);

int main(void)
{
	printf("선형검색(보초법)\n");

	printf("요소 개수 : ");
	int n;
	cin >> n;

	int* arr = new int[n + 1];
	for (int i = 0; i < n; i++) {
		printf("arr[%d] : ", i);
		cin >> arr[i];
	}

	printf("검색값 : ");
	int key;
	cin >> key;

	int idx = search(arr, n, key);
	if (idx == -1)
		printf("검색에 실패\n");
	else
		printf("%d는 arr[%d]에 있습니다.\n", key, idx);

	delete[] arr;

	return 0;
}

int search(int a[], int n, int key)
{
	int i = 0;
	a[n] = key;

	while (a[i] != key) {
		i++;
	}

	return i == n ? -1 : i;
}
