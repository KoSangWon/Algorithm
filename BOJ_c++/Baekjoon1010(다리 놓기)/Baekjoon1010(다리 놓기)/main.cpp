//
//  main.cpp
//  Baekjoon1010(다리 놓기)
//
//  Created by 고상원 on 2020/02/22.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    int T, N, M;
    int dp[31][31];
    
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> N >> M;
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= M; i++){
            dp[1][i] = i;
        }
        
        for(int i = 2; i <= N; i++)
            for(int j = i; j <= M; j++)
                for(int k = j-1; k >= i-1; k--)
                    dp[i][j] += dp[i-1][k];
        
        cout << dp[N][M] << '\n';
    }
    
    return 0;
}
