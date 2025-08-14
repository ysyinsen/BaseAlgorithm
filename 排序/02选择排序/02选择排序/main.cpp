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

//时间复杂度（平均）：O(n~2)
//空间复杂度：O(1)
//稳定性：不稳定