#include <iostream>
#include<vector>


using namespace std;

//二分搜索：时间O(log n)
//源数据必须有序
int binary_search(vector<int>& nums, int target)
{
	int left = 0;
	int right = nums.size() - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (nums[mid] < target) {
			left = mid + 1;
		}
		else if (nums[mid] > target) {
			right = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}


int main()
{
	vector<int> a{ 1,2,3,4,5,6,7,8,9 };

}