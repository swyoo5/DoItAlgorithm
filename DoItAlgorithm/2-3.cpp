#include <iostream>

using namespace std;

int main(void)
{
	int* x = new int;
	if (x == nullptr) {
		cout << "메모리 할당에 실패했습니다." << endl;
	}
	else {
		*x = 57;
		cout << "*x = " << *x << endl;
		delete x;
	}
	return 0;
}