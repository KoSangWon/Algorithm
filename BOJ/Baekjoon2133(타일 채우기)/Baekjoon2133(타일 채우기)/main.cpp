//
//  main.cpp
//  Baekjoon2133(타일 채우기)
//
//  Created by 고상원 on 2020/02/17.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int dp[31];
    cin >> N;
    dp[0] = 1;
    dp[2] = 3;
    if(N % 2 == 1)
        dp[N] = 0;
    else{
        for(int i = 4; i <= N; i += 2){
            dp[i] = 3 * dp[i-2];
            for(int j = 4; j <= i; j += 2){
                dp[i] += 2 * dp[i - j];
            }
        }
    }
    cout << dp[N] << '\n';
    return 0;
}
