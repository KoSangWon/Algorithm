//
//  main.cpp
//  Baekjoon1094(막대기)
//
//  Created by 고상원 on 2020/02/23.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int X;
    int len = 64;
    int cnt = 0;
    
    cin >> X;
    while(X > 0){
        if(len > X)
            len = len / 2;
        else{
            X -= len;
            cnt++;
        }
    }
    
    cout << cnt << '\n';
    return 0;
}
