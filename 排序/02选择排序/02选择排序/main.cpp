#include <iostream>
#include "sort.h"

int main()
{
	int arr[] = { 20,40,30,10,60,50 };
	int len = sizeof(arr) / sizeof(arr[0]);
	sort a;
	a.Mysort(arr, len);
	a.Myprint(arr, len);

	system("pause");
}

//ʱ�临�Ӷȣ�ƽ������O(n~2)
//�ռ临�Ӷȣ�O(1)
//�ȶ��ԣ����ȶ�