//
//  main.cpp
//  Baekjoon1699(제곱수의 합)
//
//  Created by 고상원 on 2020/02/15.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int N;
int dp[100001];

int main(int argc, const char * argv[]) {
    cin >> N;
    
    for(int i = 1; i <= N; i++)
        dp[i] = i;
    
    for(int i = 2; i <= N; i++)
        for(int j = 2; j*j <= i; j++)
            dp[i] = min(dp[i], dp[i-j*j] + 1);
            
    cout << dp[N] << '\n';
    return 0;
}
