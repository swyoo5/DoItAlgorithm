#include <iostream>

using namespace std;

void triangleLB(int n);
void triangleLU(int n);
void triangleRU(int n);
void triangleRB(int n);
int main(void)
{
	int n;
	cin >> n;

	triangleLB(n);
	triangleLU(n);
	triangleRU(n);
	triangleRB(n);

	return 0;
}

void triangleLB(int n) // 왼쪽 아래 직각
{
	printf("왼쪽 아래 직각\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

void triangleLU(int n) // 왼쪽 위 직각
{
	printf("왼쪽 위 직각\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}
void triangleRU(int n) // 오른쪽 위 직각
{
	printf("오른쪽 위 직각\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			printf(" ");
		}

		for (int j = i; j <= n; j++) {
			printf("*");
		}

		printf("\n");
	}
	printf("\n");
}
void triangleRB(int n) // 오른쪽 아래 직각
{
	printf("오른쪽 아래 직각\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		
		for (int j = n - i + 1; j <= n; j++) {
			printf("*");
		}

		printf("\n");
	}
	printf("\n");
}