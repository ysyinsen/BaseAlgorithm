#include<iostream>
using namespace std;

//求第n个斐波那契数列的值
long long fibonacci(int n)
{
	if (n == 1 || n == 2) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int n;
	cout << "请输入一个正整数：";
	cin >> n;
	cout << "第" << n << "位斐波那契数列的值为：" << fibonacci(n) << endl;

	system("pause");
}