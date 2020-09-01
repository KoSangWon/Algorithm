//
//  main.cpp
//  Baekjoon11055(가장 큰 증가 부분 수열)
//
//  Created by 고상원 on 2020/01/24.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int A[1001];
    int dp[1001];
    int max = 0;
    
    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> A[i];
    
    for(int i = 1; i <= N; i++){
        dp[i] = A[i];
        for(int j = 1; j < i; j++){
            if(A[i] > A[j] && dp[i] < dp[j] + A[i])
                dp[i] = dp[j] + A[i];
        }
        if(max < dp[i])
            max = dp[i];
    }
    cout << max << '\n';
    
    return 0;
}
