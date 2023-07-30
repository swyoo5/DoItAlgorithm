#include <iostream>

using namespace std;

int med3(int a, int b, int c);

int main(void)
{
	printf("max3(%d, %d, %d) = %d\n", 3, 2, 1, med3(3, 2, 1));
	printf("max3(%d, %d, %d) = %d\n", 3, 2, 2, med3(3, 2, 2));
	printf("max3(%d, %d, %d) = %d\n", 3, 1, 2, med3(3, 1, 2));
	printf("max3(%d, %d, %d) = %d\n", 3, 2, 3, med3(3, 2, 3));
	printf("max3(%d, %d, %d) = %d\n", 2, 1, 3, med3(2, 1, 3));
	printf("max3(%d, %d, %d) = %d\n", 3, 3, 2, med3(3, 3, 2));
	printf("max3(%d, %d, %d) = %d\n", 3, 3, 3, med3(3, 3, 3));
	printf("max3(%d, %d, %d) = %d\n", 2, 2, 3, med3(2, 2, 3));
	printf("max3(%d, %d, %d) = %d\n", 2, 3, 1, med3(2, 3, 1));
	printf("max3(%d, %d, %d) = %d\n", 2, 3, 2, med3(2, 3, 2));
	printf("max3(%d, %d, %d) = %d\n", 1, 3, 2, med3(1, 3, 2));
	printf("max3(%d, %d, %d) = %d\n", 2, 3, 3, med3(2, 3, 3));
	printf("max3(%d, %d, %d) = %d\n", 1, 2, 3, med3(1, 2, 3));
	return 0;
}

int med3(int a, int b, int c)
{
	int med;
	if (a >= b)
		if (b >= c)
			med = b;
		else if (a <= c)
			med = a;
		else
			med = c;
	else if (a > c)
		med = a;
	else if (b > c)
		med = c;
	else
		med = b;

	return med;
}
