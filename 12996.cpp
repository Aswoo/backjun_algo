//
// Created by 윤승우 on 2019-02-07.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

const int mod = 1000000007;
long long d[51][51][51][51];

//각 사람이 부르고 안불러서 앨범의 총수를 재귀로 구한다.

long long go(int n,int a,int b,int c);

int main(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    memset(d,-1,sizeof(d));
    cout << go(n,a,b,c) << '\n';
    return 0;
}

long long go(int n,int a,int b,int c){
    if (n == 0){
        if (a == 0 && b == 0 && c == 0) return 1;
        else return 0;
    }

    if( a< 0 || b < 0 || c < 0) return 0;
    long long &ans = d[n][a][b][c];

    ans = 0;

    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            for(int k = 0;k<2;k++){
                if(i+j+k == 0) continue;
                ans += go(n-1,a-i,b-j,c-k);
            }
        }
    }
    ans %= mod;
    return ans;

}