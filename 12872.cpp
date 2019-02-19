//
// Created by 윤승우 on 2019-02-07.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

long long mod = 1000000007;


long long d[101][101]; //길이가 p은 플레이리스트의 경우의수

int n,m,p;


int go(int index,int x){

    int y = n - x;

    //if(length == P)


    long long &ans = d[index][x];
    if(ans != -1) return ans;

    ans = 0;
    if(y>0) {
        ans += go(index +1,x+1) *y;
    }

    if(x>m){
        ans += go(index+1,x) * (x-m);
    }
    ans %= mod;
    return ans;


}

int main(){
    cin >> n >> m >> p;
    memset(d,-1,sizeof(d));
    cout << go(0, 0) << '\n';
    return 0;
}