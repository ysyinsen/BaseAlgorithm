#include<iostream>
using namespace std;

//���n��쳲��������е�ֵ
long long fibonacci(int n)
{
	if (n == 1 || n == 2) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int n;
	cout << "������һ����������";
	cin >> n;
	cout << "��" << n << "λ쳲��������е�ֵΪ��" << fibonacci(n) << endl;

	system("pause");
}