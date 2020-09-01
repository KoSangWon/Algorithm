//
//  main.cpp
//  Baekjoon1783(병든 나이트)
//
//  Created by 고상원 on 2020/03/05.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, M;
    int result = 1;
    
    cin >> N >> M;
    
    if(N == 1)
        result = 1;
    else if(N == 2){
        result = min(4, (M+1)/2);
    }else if(N >= 3){
        if(M <= 6){
            result = min(4, M);
        }else{
            result = M - 2;
        }
    }
    
    cout << result << '\n';
    
    return 0;
}
