#include <iostream>


int f[101];
int n;
int main()
{
	std::cin >> n;
	f[1] = f[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	std::cout << "第" << n << "个月有" << f[n] << "只兔子";

	system("pause");
}