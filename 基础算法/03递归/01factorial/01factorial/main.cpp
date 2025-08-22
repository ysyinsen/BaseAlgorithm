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
	cout << "请输入一个正整数：";
	cin >> n;
	cout << endl;
	cout << n << "的阶乘为：" << factorial(n) << endl;
}