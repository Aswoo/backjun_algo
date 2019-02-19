#include <iostream>


using namespace std;

int n,m,h;

int map[20][30];

int main(){


    cin >> n >> m >> h;



    for(int i = 0;i<m;i++){
        int i1,i2;
        cin >> i1 >> i2;
        map[i1][i2] = 1;
    }


    return 0;
}