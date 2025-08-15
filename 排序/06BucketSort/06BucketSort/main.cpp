#include <iostream>
#include <vector>
#include <algorithm>

void BucketSort(std::vector<int>& vec)
{
	int min = *min_element(vec.begin(), vec.end());
	int max = *max_element(vec.begin(), vec.end());

	//number of bucket: size is vec.size() 
	int bucketNum = (max - min + 1) / vec.size() + 1;
	//Create 2D array
	std::vector<std::vector<int>> Bucket(bucketNum);
	for (int i = 0;i < vec.size();i++)
	{
		int index = (vec[i] - min + 1) / vec.size();
		Bucket[index].push_back(vec[i]);
	}

	//��Ͱ����������
	for (int i = 0;i < Bucket.size();i++) {
		std::sort(Bucket[i].begin(), Bucket[i].end());
	}

	//ȡ��Ͱ������
	vec.clear();
	for (int i = 0;i < Bucket.size();i++) {
		for (int j : Bucket[i]) {
			vec.push_back(j);
		}
	}
}

int main()
{
	std::vector<int> vec = { 18,11,28,45,23,50 };
	BucketSort(vec);
	for (int i : vec)
	{
		std::cout << i << "  ";
	}
	std::cout << std::endl;
}
//ʱ�临�Ӷȣ����ţ�: O(n + n*(log n - log m))
//�ռ临�Ӷȣ����ţ�: O(N+M) N:Ͱ�ռ�   M: ������ռ�ռ�
//�ȶ��ԣ��ȶ���ȡ������ѡ�������