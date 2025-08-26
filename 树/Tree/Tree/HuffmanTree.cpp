#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
	int weight;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int w, TreeNode* l, TreeNode* r) {
		weight = w, left = l, right = r;
	}
};
//´´½¨¹þ·òÂüÊ÷
TreeNode* bulid_HuffmanTree(const vector<int>& a)
{

}
int main()
{
	vector<int> a{ 10,20,50,100 };

	system("pause");
	return 0;
}