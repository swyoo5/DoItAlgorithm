#include <iostream>

using namespace std;

int main(void)
{
	int n;

	cout << "���� : ";
	cin >> n;

	if (n > 0) cout << "����Դϴ�" << endl;
	else if (n < 0) cout << "�����Դϴ�" << endl;
	else cout << "0�Դϴ�" << endl;

	return 0;
}