//
//  main.cpp
//  Baekjoon10844(쉬운 계단 수)
//
//  Created by 고상원 on 2020/01/20.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int N;
    int dp[101][10] = {0}; //0으로 초기화 해줘야 함. 다른 수가 섞일 수 있기 때문
    int sum = 0;
    
    cin >> N;
    
    for(int i = 1; i <= 9; i++)
        dp[1][i] = 1;   //1단계에 i일때 쉬운계단의 갯수
    
    for(int i = 2; i <= N; i++){
        dp[i][0] = dp[i-1][1];
        dp[i][9] = dp[i-1][8];
        
        for(int j = 1; j <= 8; j++)
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % 1000000000;
    }
    
    for(int i = 0; i < 10; i++){
        sum += dp[N][i];
        sum %= 1000000000;
    }
    cout << sum << '\n';
    return 0;
}
