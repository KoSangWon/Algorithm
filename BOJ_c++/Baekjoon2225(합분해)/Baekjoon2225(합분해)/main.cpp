//
//  main.cpp
//  Baekjoon2225(합분해)
//
//  Created by 고상원 on 2020/03/14.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N, K;
    int dp[201][201] = {};//dp[K][N] => K개로 N만들기
    
    cin >> N >> K;
    
    for(int i = 0; i <= N; i++){
        dp[1][i] = 1;
        dp[2][i] = i + 1;
    }
    
    for(int i = 3; i <= K; i++){
        for(int j = 0; j <= N; j++){
            for(int k = 0; k <= j; k++){
                dp[i][j] = (dp[i][j] + dp[i-1][j-k]) % 1000000000;
            }
        }
    }
    cout << dp[K][N] % 1000000000 << '\n';
    
    return 0;
}
