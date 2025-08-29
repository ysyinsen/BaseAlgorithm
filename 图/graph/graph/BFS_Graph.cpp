#include<iostream>
#include<queue>
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
//标记组
bool vis[7] = { false };
//广度优先搜索
void bfs(int index) {
	queue<int> q;
	q.push(index);
	vis[index] = true;
	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		cout << char(tmp + 'A') << "   ";
		for (int i = 0; i < 7; i++) {
			if (matrix[tmp][i] == 1 && !vis[i]) {
				q.push(i);
				vis[i] = true;
			}
		}
	}
}
int main()
{
	bfs(0);
	cout << endl;
	system("pause");
	return 0;
}