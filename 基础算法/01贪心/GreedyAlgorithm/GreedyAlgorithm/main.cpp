//��Ǯ��
#include <iostream>
#include <algorithm>

int total, n, ans;
int money[10];

bool descending(int i, int j)
{
	return i > j;
}

int main() {
	std::cin >> total >> n;
	for (int i = 0;i < n;i++) std::cin >> money[i];
	std::sort(money, money + n, descending);
	for (int i = 0;i < n && total>0;i++)
	{
		int num = total / money[i];
		std::cout << "num��ֵΪ��" << num << std::endl;
		total %= money[i];
		std::cout << "total��ֵΪ��" << total << std::endl;
		ans += num;
	}
	std::cout << ans << std::endl;

	system("pause");
}