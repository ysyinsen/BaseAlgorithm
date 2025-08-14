#include "sort.h"

void sort::Mysort(int arr[], int len)
{
	for (int i = 0;i < len - 1;i++)
	{
		int minIndex = i;
		for (int j = i + 1;j < len;j++)
		{
			if (arr[i] > arr[j])
			{
				minIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}

void sort::Myprint(int arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		std::cout << arr[i] << "  ";
	}
	std::cout << std::endl; 
}
