//
//  main.cpp
//  Baekjoon9095(1,2,3더하기)
//
//  Created by 고상원 on 2020/01/20.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    int n;
    int dp[11];
    
    cin >> T;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 0; i < T; i++){
        cin >> n;
        for(int j = 4; j <= n; j++)
            dp[j] = dp[j-1] + dp[j-2] + dp[j-3];
        cout << dp[n] << '\n';
    }
    return 0;
}
