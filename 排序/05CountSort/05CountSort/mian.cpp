#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

void CountSort(std::vector<int>& vec)
{
	//1.找最大值
	int max = *std::max_element(vec.begin(), vec.end());
	//2.根据最大值开辟数组
	int* countArr = new int[max + 1];
	memset(countArr, 0, sizeof(int) * (max + 1));
	//3.将数组中元素放入新数组中并计数
	for (auto i : vec)
	{
		countArr[i]++;
	}
	vec.clear();
	//4.按下标依次取出元素
	for (int i = 0;i <= max;i++)
	{
		while (countArr[i])
		{
			vec.push_back(i);
			countArr[i]--;
		}
	}
	delete[] countArr;
}

int main()
{
	std::vector<int> vec = { 8,2,3,4,3,6,6,3,9 };
	CountSort(vec);
	for (auto i : vec)
	{
		std::cout << i << "  ";
	}
	std::cout << std::endl;
	system("pause");
}