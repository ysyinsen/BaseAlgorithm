#include <iostream>
#include <algorithm>

struct goods{
	int price;
	int num;
}a[50];

int ans;
int total, goodsNum;

bool descending(goods a, goods b)
{
	return a.price< b.price;
}

int main()
{
	std::cin >> total >> goodsNum;
	for (int i = 0; i < goodsNum; i++)
	{
		std::cin >> a[i].price >> a[i].num;
	}
	std::sort(a, a + goodsNum, descending);

	for (int i = 0; i < goodsNum; i++)
	{
		if (total >= a[i].price * a[i].num)
		{
			ans += a[i].num;
			total -= a[i].price * a[i].num;
		}
		else 
		{
			ans = ans + total / a[i].price;
			total %= a[i].price;
		}
	}

	std::cout << "可以买" << ans << "个商品" << std::endl;
	std::cout << "剩余" << total << "元" << std::endl;
}