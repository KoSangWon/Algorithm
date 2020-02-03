//
//  main.cpp
//  Baekjoon1912(연속합)
//
//  Created by 고상원 on 2020/02/01.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int arr[100001];
    int dp[100001];//dp[i] 에는 arr[i] 를 포함하였을때의 최대 합을 담는다.
    int max;
    
    
    cin >> n;
    for(int i = 1;i <= n; i++){
        cin >> arr[i];
    }
    
    //max 로도 구현 가능
    dp[1] = arr[1];
    max = dp[1];
    for(int i = 2; i <= n; i++){
        if(dp[i-1] > 0)
            dp[i] = dp[i-1] + arr[i];
        else
            dp[i] = arr[i];
    }
    
    //이 부분부터가 핵심
    max = dp[1];
    for(int i = 2; i <= n; i++){
        if(max < dp[i])
        max = dp[i];
    }
    //cout << dp[4]; 1, 2, 3, -100 일때 dp[4] = -96 이다. dp가 정답이 아니라 dp들을 비교하여 최대 값이 정답이다.
    cout << max << '\n';
    
    return 0;
}
