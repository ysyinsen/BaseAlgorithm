#include <iostream>
#include <vector>


void ShellInsert(std::vector<int>& obj,int start, int gap)
{
	//第一个for循环构建无序区
	for (int j = start + gap ;j < obj.size();j += gap)
	{
		//第二个for循环构建有序区
		for (int i = start;i < j;i+= gap)
		{
			if (obj[j] < obj[i])
			{
				int temp = obj[j];
				for (int k = j - gap;k >= i;k -= gap)
				{
					obj[k + gap] = obj[k];
				}
				obj[i] = temp;
				break;
			}
		}
	}
}

void ShellSort(std::vector<int>& obj)
{
	for (int d = obj.size() / 2;d >= 1;d /= 2)
	{
		for (int i = 0;i < d;i++)
		{
			ShellInsert(obj, i, d);
		}
	}
}


int main()
{
	std::vector<int> obj = { 80,30,60,40,20,10,50,70 };

	ShellSort(obj);

	for (int i : obj)
	{
		std::cout << i << "  ";
	}
	std::cout << std::endl;

	system("pause");
}

//时间复杂度：O(n~2)
//空间复杂度：O(1)
//稳定性：不稳定