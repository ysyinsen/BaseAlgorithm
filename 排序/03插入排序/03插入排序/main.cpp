#include <iostream>


void sort(int arr[],int len)
{
	for (int j = 1;j < len;j++)
	{
		for (int i = 0;i < j;i++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[j];
				for (int k = j - 1;k >= i;k--)
				{
					arr[k+1] = arr[k];
				}
				arr[i] = temp;
				break;
			}
		}
	}
}

int main(){
	int arr[] = { 20,30,40,10,60,50 };
	int len = sizeof(arr) / sizeof(arr[0]);
	sort(arr, len);
	for (int i : arr)
	{
		std::cout << i << "  ";
	}
	std::cout << std::endl;

	system("pause");
}

//ʱ�临�Ӷ�: O(n~2)
//�ռ临�Ӷȣ�O(1)
//�ȶ��ԣ��ȶ�