//
//  main.cpp
//  Baekjoon9465(스티커)
//
//  Created by 고상원 on 2020/01/22.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    int n;
    int arr[100001][2] = {0};
    int dp[100001][2] = {0};
    
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> n;
        for(int j = 0; j < 2; j++)
            for(int k = 1; k <= n; k++)
                cin >> arr[k][j];
        
        dp[1][0] = arr[1][0];
        dp[1][1] = arr[1][1];
        dp[2][0] = dp[1][1] + arr[2][0];
        dp[2][1] = dp[1][0] + arr[2][1];
        for(int j = 2; j <= n; j++){
            dp[j][0] = max(max(dp[j-1][1], dp[j-2][0]), dp[j-2][1]) + arr[j][0];
            dp[j][1] = max(max(dp[j-1][0], dp[j-2][0]), dp[j-2][1]) + arr[j][1];
        }
        cout << max(dp[n][0], dp[n][1]) << '\n';
    }
    
            
    return 0;
}
