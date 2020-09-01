//
//  main.cpp
//  Baekjoon11054(가장 긴 바이토닉 부분 수열)
//
//  Created by 고상원 on 2020/01/27.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int A[1001];
    int dp[2][1001];
    
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> A[i];
    }
    
    //처음부터 시작
    for(int i = 1; i <= N; i++){
        dp[0][i] = 1;
        for(int j = 1; j < i; j++)
            if(A[i] > A[j] && dp[0][i] < dp[0][j] + 1)
                dp[0][i] = dp[0][j] + 1;
    }
    
    //끝에서부터 시작
    for(int i = N; i >= 1; i--){
        dp[1][i] = 1;
        for(int j = N; j > i; j--)
            if(A[i] > A[j] && dp[1][i] < dp[1][j] + 1)
                dp[1][i] = dp[1][j] + 1;
    }
    
    int max = 0;
    for(int i = 1; i <= N; i++){
        if(max < dp[0][i] + dp[1][i] - 1)
            max = dp[0][i] + dp[1][i] - 1;
    }
    
    cout << max << '\n';
    
    return 0;
}

