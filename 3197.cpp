//
// Created by 윤승우 on 2019-02-13.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool check[1501][1501];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

vector<pair<int, int>> swallow;


bool connect_check(vector<string> a) {
    return true;
}

int simulate(vector<string> &a, int day) {

    int ans = 0;

    int n = a.size();
    int m = a[0].size();

    queue<vector<string>> q;
    //q.push(1);
    q.push(a);

    while (!q.empty()) {

        vector<string> map = q.front();

        q.pop();

        if (connect_check(map)) {

            return ans;

        } else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {

                    if (check[i][j] == false) {

                        if (map[i][j] == 'X') {

                            for (int k = 0; k < 4; k++) {

                                int nx = i + dx[k];
                                int ny = j + dy[k];

                                if (nx > 0 || ny > 0 || nx < n - 1 || ny < m - 1) continue;

                                if (a[nx][ny] == '.') {
                                    map[i][j] = '.';
                                    check[i][j] = true;
                                    break;
                                }

                            }
                        }
                    }

                }
            }
            ans++;
            q.emplace(map);

        }

    }

}


int main() {


    int r, c;

    cin >> r >> c;

    vector<string> a(r);


    for (int i = 0; i < r; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 'L') {
                swallow.emplace_back(i, j);
            }
        }
    }

    cout << simulate(a, 0);

    return 0;
}