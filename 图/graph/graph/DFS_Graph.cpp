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
//标记数组
bool vis_s[7];
bool vis_r[7];
//深度优先遍历：1.先进后出（栈、递归）2.标记-防止重复搜索 3.邻接点（邻接矩阵）
//深度优先遍历（栈）
void dfs_stack() {
	stack<int> s;
	s.push(0);   //从A开始搜索，A点先入栈
	vis_s[0] = 1;  //入栈标记防止后序重新加入
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
//深度优先遍历（递归）
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