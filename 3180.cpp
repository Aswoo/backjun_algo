//
// Created by 윤승우 on 2019-02-12.
//

#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;



bool visit[250][250] = {false,};
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};


struct area{
    int sx;
    int sy;

    int sc;
    int wc;
};


int main(){


    int R,C;

    cin >> R >> C;

    vector<string> a(C);
    vector< pair<int,int> > sheep;
    for(int i = 0;i<R;i++){
        cin >> a[i];
    }

    for(int i = 0;i<R;i++){
        for(int j = 0;j<C;j++){
            if(a[i][j] == 'O'){
                sheep.emplace_back(i,j);
            }
        }
    }

    queue<pair<int,int>> q;


    return 0;
}