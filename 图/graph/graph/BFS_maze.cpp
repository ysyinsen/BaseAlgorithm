#include <iostream>
#include <queue>
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

struct node
{
	int x, y;
};
queue<node> q;
//�����������(Breadth-first search)
void bfs() {
	while (!q.empty()) {
		node tmp = q.front();
		q.pop();
		if (tmp.x == fx && tmp.y == fy) {
			flag = true;
			return;
		}
		for (int i = 0; i < 4; i++) {
			int bx = tmp.x + dx[i], by = tmp.y + dy[i];
			//Խ�粻��
			if (bx < 0 || bx >= n || by < 0 || by >= n) continue;
			//��ǽ����
			if (maze[bx][by] == '*') continue;
			//�߹���·����
			if (vis[bx][by]) continue;
			vis[bx][by] = 1;
			q.push(node{ bx,by });
		}
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
	q.push(node{ sx,sy });
	vis[sx][sy] = 1;
	bfs();
	cout << (flag ? "YES\n" : "NO\n");

	system("pause");
	return 0;
}