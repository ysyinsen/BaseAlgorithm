#include<iostream>


void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//ascendingSort
void ascendingSort(int arr[], int len)
{
	for (int j = len - 1;j >= 1;j--)
	{
		bool flag = true;  //优化
		for (int i = 0;i < len - 1;i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				flag = false;
			}
		}
		if (flag) break; //某一趟已有序则提前跳出
	}
}

//descendingSort
void descendingSort(int arr[], int len)
{
	for (int j = len - 1;j >= 1;j--)
	{
		bool flag = true;  //优化
		for (int i = 0;i < len - 1;i++)
		{
			if (arr[i] < arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				flag = false;
			}
		}
		if (flag) break; //某一趟已有序则提前跳出
	}
}

void print(int arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		std::cout << arr[i] << "  ";
	}
}


int main()
{
	int arr[] = { 20,40,30,10,60,50 };
	int len = sizeof(arr) / sizeof(arr[0]);
	ascendingSort(arr, len);
	print(arr, len);
	std::cout << std::endl;
	descendingSort(arr, len);
	print(arr, len);

	system("pause");

}
//时间复杂度（平均）：O(n~2)
//空间复杂度（额外）：O(1)
//稳定性：稳定