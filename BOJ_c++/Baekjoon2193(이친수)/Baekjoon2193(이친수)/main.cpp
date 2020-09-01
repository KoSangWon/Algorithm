//
//  main.cpp
//  Baekjoon2193(이친수)
//
//  Created by 고상원 on 2020/01/22.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    unsigned long long int dp[91][2] = {0};
    unsigned long long int sum = 0;
    
    cin >> N;
    dp[1][0] = 0;
    dp[1][1] = 1;
    
    for(int i = 2; i <= N; i++){
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }
    
    sum = dp[N][0] + dp[N][1];
    cout << sum << '\n';
    return 0;
}
