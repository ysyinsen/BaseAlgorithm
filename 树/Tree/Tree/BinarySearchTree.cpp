#include <iostream>
#include <vector>
#include <queue>
#include<stack>

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
			//左子树
			if (tmp->value < troot->value) {
				if (troot->lchild == NULL) {
					troot->lchild = tmp;
					break;
				}
				else troot = troot->lchild;
			}
			//右子树
			else if (tmp->value > troot->value) {
				if (troot->rchild == NULL) {
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
//基于广度优先搜索实现的层次遍历
void LayerOrder(treeNode* root) {
	queue<treeNode*> q;
	q.push(root);
	while (!q.empty()) {
		treeNode* tmp = q.front();
		cout << tmp->value << "  ";
		q.pop();
		if (tmp->lchild != NULL) {
			q.push(tmp->lchild);
		}
		if (tmp->rchild != NULL) {
			q.push(tmp->rchild);
		}
	}
}
//深度优先遍历
void DepthFirstSearch(treeNode* root) {
	stack<treeNode*> s;
	s.push(root);
	while (!s.empty()) {
		treeNode* stackNode = s.top();
		cout << stackNode->value << endl;
		s.pop();
		if (stackNode->rchild) {
			s.push(stackNode->rchild);
		}
		if (stackNode->lchild) {
			s.push(stackNode->lchild);
		}
	}
}

// 递归释放二叉树内存
void freeTree(treeNode* root) {
	if (root == nullptr) return;
	// 先释放左子树
	freeTree(root->lchild);
	// 再释放右子树
	freeTree(root->rchild);
	// 最后释放当前节点
	delete root;
}

int main() {
	vector<int> a{ 5,4,3,1,2,6,8,9,7 };


	system("pause");
	return 0;
}