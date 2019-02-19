//
// Created by 윤승우 on 2019-02-12.
//

#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;


bool check[1000001];

int main() {

    int f, s, g, u, d;

    cin >> f >> s >> g >> u >> d;

    queue<pair<int, int>> q;

    q.emplace(s, 0);
    check[s] = true;

    int ans = -1;

    while (!q.empty()) {

        int current = q.front().first;
        int num = q.front().second;

        q.pop();

        if (current == g) {
            if(ans > num){
                num = ans;
            }
        }

        if (current > f) continue;

        if (current < 1) continue;

        if(check[current+u] == false) {
            q.emplace(current + u, num + 1);
            check[current+u] == true;
        }
        if(check[current-d] == false){
            q.emplace(current - d, num + 1);
            check[current+u] == true;
        }

    }

    if(check[g]){
        cout << ans << '\n';
    }else{
        cout << "use the stairs\n";
    }


    return 0;
}

