//
//  main.cpp
//  Baekjoon2884(알람 시계)
//
//  Created by 고상원 on 2020/04/05.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int H, M;
    cin >> H >> M;
    if(M - 45 < 0){
        if(H - 1 < 0){
            H = 23;
        }else{
            H -= 1;
        }
        M += 15;
    }else{
        M -= 45;
    }
    cout << H << ' ' << M << '\n';
    return 0;
}
