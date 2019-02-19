
#include <iostream>

using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int a[500][500];
bool c[500][500];

int ans = 0;
int n, m;

void go(int x, int y, int cnt, int sum) {

    if (cnt == 4) {
        if (ans < sum) ans = sum;
        return;
    }
    if (x < 0 || x >= n || y < 0 || y >= m) return;

    if (c[x][y]) return;
    c[x][y] = true;


    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        go(nx, ny, cnt + 1, sum + a[x][y]);
    }
    c[x][y] = false;


}


int main() {

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            go(i, j, 0, 0);

            if (j + 2 < m) {
                int temp = a[i][j] + a[i][j + 1] + a[i][j + 2];
                if (i - 1 >= 0) {
                    int temp2 = temp + a[i - 1][j + 1];
                    if (ans < temp2) ans = temp2;
                }
                if (i + 1 < n) {
                    int temp2 = temp + a[i + 1][j + 1];
                    if (ans < temp2) ans = temp2;
                }
            }
            if (i + 2 < n) {
                int temp = a[i][j] + a[i + 1][j] + a[i + 2][j];
                if (j + 1 < m) {
                    int temp2 = temp + a[i + 1][j + 1];
                    if (ans < temp2) ans = temp2;
                }
                if (j - 1 >= 0) {
                    int temp2 = temp + a[i + 1][j - 1];
                    if (ans < temp2) ans = temp2;
                }
            }

        }
    }
    cout << ans  << '\n';
    return 0;
}

