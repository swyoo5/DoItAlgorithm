// 요소가 n개인 배열 a에서 key와 일치하는 모든 요소의 인덱스를 배열 idx의 맨 앞부분부터 순서대로 저장하고 일치한 요소의 개수를 반환하는 함수를 작성하시오.

#include <iostream>

using namespace std;

int search_idx(const int a[], int n, int key, int idx[]);

int main(void)
{
	int a[8] = { 1, 9, 2, 9, 4, 6, 7, 9 };
	int idx[8] = { 0 };
	cout << search_idx(a, 8, 9, idx);
	return 0;
}

int search_idx(const int a[], int n, int key, int idx[])
{
	int idxIndex = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			idx[idxIndex++] = i;
		}
	}

	return idxIndex;
}