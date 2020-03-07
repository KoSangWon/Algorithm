//
//  main.cpp
//  Baekjoon1003(피보나치 함수)
//
//  Created by 고상원 on 2020/03/08.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int T, N;
    int dp[41][2] = {0};
    
    cin >> T;
    
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;
    for(int i = 0; i < T; i++){
        cin >> N;
        for(int j = 2; j <= N; j++){
            dp[j][0] = dp[j-1][0] + dp[j-2][0];
            dp[j][1] = dp[j-1][1] + dp[j-2][1];
        }
        cout << dp[N][0] << ' ' << dp[N][1] << '\n';
    }
    return 0;
}
