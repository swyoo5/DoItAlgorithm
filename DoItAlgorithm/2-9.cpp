#include <iostream>

using namespace std;

int main(void)
{
	unsigned long count = 0;
	for (int i = 2; i < 1000; i++) {
		int j;
		for (j = 2; j < i; j++) {
			count++;
			if (i % j == 0) break;
		}

		if (j == i) printf("%d\n", i);
	}
	cout << "³ª´°¼À È½¼ö : " << count << endl;
	return 0;
}