#include <iostream>
using namespace std;

long long factorial(int n)
{
	if (n == 1) return 1;
	return n * factorial(n - 1);
}


int main()
{
	int n;
	cout << "������һ����������";
	cin >> n;
	cout << endl;
	cout << n << "�Ľ׳�Ϊ��" << factorial(n) << endl;
}