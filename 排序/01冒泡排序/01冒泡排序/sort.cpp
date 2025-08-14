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
		bool flag = true;  //�Ż�
		for (int i = 0;i < len - 1;i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				flag = false;
			}
		}
		if (flag) break; //ĳһ������������ǰ����
	}
}

//descendingSort
void descendingSort(int arr[], int len)
{
	for (int j = len - 1;j >= 1;j--)
	{
		bool flag = true;  //�Ż�
		for (int i = 0;i < len - 1;i++)
		{
			if (arr[i] < arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				flag = false;
			}
		}
		if (flag) break; //ĳһ������������ǰ����
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
//ʱ�临�Ӷȣ�ƽ������O(n~2)
//�ռ临�Ӷȣ����⣩��O(1)
//�ȶ��ԣ��ȶ�