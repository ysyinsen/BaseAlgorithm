#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

void CountSort(std::vector<int>& vec)
{
	//1.�����ֵ
	int max = *std::max_element(vec.begin(), vec.end());
	//2.�������ֵ��������
	int* countArr = new int[max + 1];
	memset(countArr, 0, sizeof(int) * (max + 1));
	//3.��������Ԫ�ط����������в�����
	for (auto i : vec)
	{
		countArr[i]++;
	}
	vec.clear();
	//4.���±�����ȡ��Ԫ��
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