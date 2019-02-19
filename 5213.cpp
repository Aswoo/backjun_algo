//
// Created by 윤승우 on 2019-02-11.
//

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector< pair<int,int> > a(n);

    int p1,p2;

    for(int i = 0;i<n*n-n/2;i++){

        cin >> p1 >> p2;
        a.emplace_back(p1,p2);
        if(i != 0 && i%n == 0)
    }


    return 0;
}
