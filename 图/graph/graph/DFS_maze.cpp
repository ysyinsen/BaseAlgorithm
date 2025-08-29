#include <iostream>
using namespace std;

/* 迷宫  4*6
S**..*
....*.
*.*.*.
**F...
*/

char maze[101][101];  //迷宫总大小
bool vis[101][101];  //标记数组
int n, m;			//n行m列
int sx, sy;			//起点坐标
int fx, fy;			//终点坐标
bool flag = false;  //是否走到F的标志
//方向数组(上下左右)
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
//深度优先搜素(Depth-first search)
void dfs(int x, int y) {
	if (x == fx && y == fy) {
		flag = true;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int bx = x + dx[i], by = y + dy[i];
		//越界不搜
		if (bx < 0 || bx >= n || by < 0 || by >= n) continue;
		//碰墙不搜
		if (maze[bx][by] == '*') continue;
		//走过的路不搜
		if (vis[bx][by]) continue;
		vis[bx][by] = 1;
		dfs(bx, by);
	}

}

int main() {
	cout << "请输入迷宫的规格:  ";
	cin >> n >> m;
	cout << "请输入迷宫的格式:  " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'S')
				sx = i, sy = j;
			if (maze[i][j] == 'F')
				fx = i, fy = j;
		}
	}
	vis[sx][sy] = 1;
	dfs(sx, sy);
	cout << (flag ? "YES\n" : "NO\n");

	system("pause");
	return 0;
}