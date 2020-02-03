//
//  main.cpp
//  Baekjoon11057(오르막 수)
//
//  Created by 고상원 on 2020/01/22.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int dp[1001][10];
    cin >> N;
    
    for(int i = 0; i < 10; i++){
        dp[1][i] = 1;   // 한자리 수일 경우에 대한 초기화
    }
    
    for(int i = 2; i <= N; i++){
        dp[i][0] = 1;   //i번째 자리가 0일때는 000.. 이런 형식밖에 없기 때문에 1가지경우
        for(int j = 1; j < 10; j++){
            dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 10007;
        }
    }
    
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += dp[N][i];
    }
    sum %= 10007;
    cout << sum << '\n';
    
    return 0;
}
