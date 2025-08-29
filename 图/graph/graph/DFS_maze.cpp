#include <iostream>
using namespace std;

/* �Թ�  4*6
S**..*
....*.
*.*.*.
**F...
*/

char maze[101][101];  //�Թ��ܴ�С
bool vis[101][101];  //�������
int n, m;			//n��m��
int sx, sy;			//�������
int fx, fy;			//�յ�����
bool flag = false;  //�Ƿ��ߵ�F�ı�־
//��������(��������)
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
//�����������(Depth-first search)
void dfs(int x, int y) {
	if (x == fx && y == fy) {
		flag = true;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int bx = x + dx[i], by = y + dy[i];
		//Խ�粻��
		if (bx < 0 || bx >= n || by < 0 || by >= n) continue;
		//��ǽ����
		if (maze[bx][by] == '*') continue;
		//�߹���·����
		if (vis[bx][by]) continue;
		vis[bx][by] = 1;
		dfs(bx, by);
	}

}

int main() {
	cout << "�������Թ��Ĺ��:  ";
	cin >> n >> m;
	cout << "�������Թ��ĸ�ʽ:  " << endl;
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