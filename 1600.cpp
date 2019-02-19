//
// Created by 윤승우 on 2019-02-13.
//


#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <algorithm>

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int hx[] = {2, 1, 2, 1, -2, -1, -1, -2};
int hy[] = {1, 2, -1, -2, -1, -2, 2, 1};
//int hy[] = {1, 0, -1, 0};


bool check[201][201];
int d[201][201][31];

using namespace std;

int main() {


    int K, w, h;



    cin >> K;
    cin >> w >> h;
    vector<string> a(w);
    for (int i = 0; i < h; i++) {
        cin >> a[i];
    }

    queue<tuple<int, int, int>> q;

    q.emplace(0, 0, K);

    while (!q.empty()) {
        int x, y, k;
        tie(x, y, k) = q.front();

        for(int i = 0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx >= h || ny < 0 || ny >=w || check[nx][nxy]) continue;


        }

        for (int j = 0; j < 8; j++) {
            int nhx = x + hx[j];
            int nhy = y + hy[j];

            if(nhx < 0 || nhx >= h || nhy < 0 || nhy >=w) continue;
            //int hy = x + hy[i];
        }

    }
    return 0;
}