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
	std::cout << "��" << n << "������" << f[n] << "ֻ����";

	system("pause");
}