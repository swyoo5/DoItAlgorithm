#include <iostream>

using namespace std;

int main(void)
{
	int n;

	cout << "정수 : ";
	cin >> n;

	if (n > 0) cout << "양수입니다" << endl;
	else if (n < 0) cout << "음수입니다" << endl;
	else cout << "0입니다" << endl;

	return 0;
}