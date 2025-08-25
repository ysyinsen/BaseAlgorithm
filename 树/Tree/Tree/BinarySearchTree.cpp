#include <iostream>
#include <vector>

using namespace std;

struct treeNode {
	int value;
	treeNode* lchild;
	treeNode* rchild;
	treeNode(int v) {
		value = v, lchild = NULL, rchild = NULL;
	}
};
//二叉搜索树的创建
void build_binarySearchTree(vector<int> a) {
	treeNode* root = new treeNode(a[0]);
	for (int i = 1; i < a.size(); i++) {
		treeNode* tmp = new treeNode(a[i]);
		treeNode* troot = root;
		while (troot) {
			if (tmp->value < troot->value) {
				if (troot->lchild = NULL) {
					troot->lchild = tmp;
					break;
				}
				else troot = troot->lchild;
			}
			else if (tmp->value > troot->value) {
				if (troot->rchild = NULL) {
					troot->rchild = tmp;
					break;
				}
				else troot = troot->rchild;
			}
		}
	}
}
//前序遍历
void PreOrder(treeNode* root) {
	if (root == NULL) {
		return;
	}
	cout << root->value;
	PreOrder(root->lchild);
	PreOrder(root->rchild);
}

//中序遍历
void InOrder(treeNode* root) {
	if (root == NULL) {
		return;
	}
	InOrder(root->lchild);
	cout << root->value;
	InOrder(root->rchild);
}

//后序遍历
void PostOrder(treeNode* root) {
	if (root == NULL) {
		return;
	}
	PostOrder(root->lchild);
	PostOrder(root->rchild);
	cout << root->value;
}

int main() {
	vector<int> a{ 5,4,3,1,2,6,8,9,7 };





	system("pause");
	return 0;
}