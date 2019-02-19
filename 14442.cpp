//
// Created by 윤승우 on 2019-02-13.
//

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
queue<pair<int, int>> q;
int d[1001][1001][11];
bool check[1001][1001];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};



int main() {


    int n, m, k;
    cin >> n >> m >> k;

    vector<string> a(n);

    for (int i = 1; i <= m; i++) {
        cin >> a[i];
    }

    queue<tuple<int,int,int>> q;
    d[0][0][0] = 1;
    q.push(make_tuple(0,0,0));

    while(!q.empty()){
        int x,y,z;
        tie(x,y,z) = q.front();
        q.pop();

        for(int l = 0;l<4;l++){

            int nx = x+dx[k];
            int ny = y+dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

            if(a[nx][ny] == 0 && d[nx][ny][z] == 0) {
                d[nx][ny][z] = d[x][y][z] + 1;
                q.push(make_tuple(nx,ny,z));
            }
            if(z + 1 <= k && a[nx][ny] == 1 && d[nx][ny][z+1] == 0){
                d[nx][ny][z+1] = d[x][y][z] + 1;
                q.push(make_tuple(nx,ny,z+1));
            }


        }
    }
    //q.emplace(1, 1);
    return 0;
}