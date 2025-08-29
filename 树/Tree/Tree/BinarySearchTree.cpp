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
//�����������Ĵ���
void build_binarySearchTree(vector<int> a) {
	treeNode* root = new treeNode(a[0]);
	for (int i = 1; i < a.size(); i++) {
		treeNode* tmp = new treeNode(a[i]);
		treeNode* troot = root;
		while (troot) {
			//������
			if (tmp->value < troot->value) {
				if (troot->lchild == NULL) {
					troot->lchild = tmp;
					break;
				}
				else troot = troot->lchild;
			}
			//������
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
//ǰ�����
void PreOrder(treeNode* root) {
	if (root == NULL) {
		return;
	}
	cout << root->value;
	PreOrder(root->lchild);
	PreOrder(root->rchild);
}
//�������
void InOrder(treeNode* root) {
	if (root == NULL) {
		return;
	}
	InOrder(root->lchild);
	cout << root->value;
	InOrder(root->rchild);
}
//�������
void PostOrder(treeNode* root) {
	if (root == NULL) {
		return;
	}
	PostOrder(root->lchild);
	PostOrder(root->rchild);
	cout << root->value;
}
//���ڹ����������ʵ�ֵĲ�α���
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
//������ȱ���
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

// �ݹ��ͷŶ������ڴ�
void freeTree(treeNode* root) {
	if (root == nullptr) return;
	// ���ͷ�������
	freeTree(root->lchild);
	// ���ͷ�������
	freeTree(root->rchild);
	// ����ͷŵ�ǰ�ڵ�
	delete root;
}

int main() {
	vector<int> a{ 5,4,3,1,2,6,8,9,7 };


	system("pause");
	return 0;
}