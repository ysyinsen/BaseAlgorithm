#include <iostream>
#include <vector>

//0开始的完全二叉树，大根堆，小根堆


void Create_Max_Heap(std::vector<int>& vec, int start, int end) {
	int cur = start;
	int left = 2 * cur + 1;
	for (; left <= end; cur = left, left = 2 * cur + 1)
	{
		if (left < end&& vec[left] < vec[left + 1]) left++;
		if (vec[left] > vec[cur]) std::swap(vec[left], vec[cur]);
		else break;
	}
}

void HeapSort(std::vector<int>& vec) {
	for (int i = vec.size() / 2 - 1; i >= 0; i--)
	{
		Create_Max_Heap(vec, i, vec.size() - 1);
	}
	for (int i = vec.size() - 1; i > 0; i--)
	{
		std::swap(vec[0], vec[i]);
		Create_Max_Heap(vec, 0, i - 1);
	}
}


int main()
{
	std::vector<int> vec = { 26,18,49,19,67,35,29,77,69 };
	HeapSort(vec);
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << "  ";
	}
	std::cout << std::endl;
	system("pause");
}

//时间复杂度：O(n*log n)
//空间复杂度：O(1)
//稳定性：不稳定