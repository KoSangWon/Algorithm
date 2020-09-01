//
//  main.cpp
//  Baekjoon11726(2xN타일링)
//
//  Created by 고상원 on 2020/01/20.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    int dp[1001]={0};
    
    cin >> n;
    
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;//dp[3]=dp[2]+dp[1], dp[4]=dp[3]+dp[2]
    }
    cout << dp[n] << '\n';
    return 0;
}
