#include <iostream>

using namespace std;

int main(void)
{
	int* x = new int;
	if (x == nullptr) {
		cout << "�޸� �Ҵ翡 �����߽��ϴ�." << endl;
	}
	else {
		*x = 57;
		cout << "*x = " << *x << endl;
		delete x;
	}
	return 0;
}