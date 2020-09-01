//
//  main.cpp
//  Beakjoon2579(계단 오르기)
//
//  Created by 고상원 on 2020/02/08.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int arr[301];
    int dp[301];
    
    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> arr[i];
    
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[1],arr[2])+arr[3];
    for(int i = 4; i <= N; i++)
        dp[i] = max(dp[i-3] + arr[i-1], dp[i-2]) + arr[i];
    
    cout << dp[N] << '\n';
    
    return 0;
}
