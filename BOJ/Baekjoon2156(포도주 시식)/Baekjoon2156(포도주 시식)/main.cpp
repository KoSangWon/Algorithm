//
//  main.cpp
//  Baekjoon2156(포도주 시식)
//
//  Created by 고상원 on 2020/01/23.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int arr[10001];
    int dp[10001];
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[1]+arr[2], (max(arr[1], arr[2]) + arr[3]));
    for(int i = 4; i <= n; i++)
        dp[i] = max(dp[i-1], max(dp[i-2], dp[i-3] + arr[i-1]) + arr[i]);
    cout << dp[n] << '\n';
    return 0;
}
