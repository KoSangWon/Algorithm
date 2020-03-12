//
//  main.cpp
//  Baekjoon9461(파도반 수열)
//
//  Created by 고상원 on 2020/03/13.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int T, N;
    long int dp[101] = {0};
    cin >> T;
    
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    for(int j = 4; j <= 100; j++)
        dp[j] = dp[j-2] + dp[j-3];
    
    for(int i = 0; i < T; i++){
        cin >> N;
        cout << dp[N] << '\n';
    }
    
    return 0;
}
