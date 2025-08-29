#include<iostream>
#include<stack>
using namespace std;

int matrix[7][7] = {
	{0,0,1,1,0,1,0},
	{0,0,1,0,0,0,0},
	{1,1,0,1,0,0,0},
	{1,0,1,0,0,0,0},
	{0,0,0,0,0,0,1},
	{1,0,0,0,0,0,1},
	{0,0,0,0,1,1,0}
};
//�������
bool vis_s[7];
bool vis_r[7];
//������ȱ�����1.�Ƚ������ջ���ݹ飩2.���-��ֹ�ظ����� 3.�ڽӵ㣨�ڽӾ���
//������ȱ�����ջ��
void dfs_stack() {
	stack<int> s;
	s.push(0);   //��A��ʼ������A������ջ
	vis_s[0] = 1;  //��ջ��Ƿ�ֹ�������¼���
	while (!s.empty()) {
		int tmp = s.top();
		s.pop();
		cout << char(tmp + 'A') << "    ";
		for (int i = 0; i < 7; i++)
		{
			if (matrix[tmp][i] == 1 && vis_s[i] == 0) {
				s.push(i);
				vis_s[i] = 1;
			}
		}
	}
}
//������ȱ������ݹ飩
void dfs_recursion(int tmp) {
	vis_r[tmp] = 1;
	cout << char(tmp + 'A') << "    ";
	for (int i = 0; i < 7; i++)
		if (matrix[tmp][i] == 1 && vis_r[i] == 0)
			dfs_recursion(i);
}


int main() {
	dfs_stack();
	cout << endl;

	dfs_recursion(0);
	cout << endl;
	system("pause");
	return 0;
}