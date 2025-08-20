//╥ед╖ух
#include <iostream>
#include <algorithm>

int n;
int wand[10], box[10];

int main()
{
	std::cin >> n;
	for (int i = 0;i < n;i++)
	{
		std::cin >> wand[i];
	}
	for (int i = 0;i < n;i++)
	{
		std::cin >> box[i];
	}
	std::sort(wand, wand + n);
	std::sort(box, box + n);
	int i = 0;
	for (int i = 0;i < n;i++)
	{
		if (wand[i] > box[i])
		{
			std::cout << "NO" << std::endl;
			return 0;
		}
	}
	std::cout << "YES" << std::endl;
	return 0;
}
