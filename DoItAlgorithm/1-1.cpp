#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	
	cout << "�� ������ �ִ��� ���մϴ�.\n";
	cout << "a�� : ";
	cin >> a;

	cout << "b�� : ";
	cin >> b;

	cout << "c�� : ";
	cin >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "�ִ��� " << max << "�Դϴ�." << endl;
	return 0;
}