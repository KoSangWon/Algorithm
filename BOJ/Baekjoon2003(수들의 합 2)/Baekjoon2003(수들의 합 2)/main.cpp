//
//  main.cpp
//  Baekjoon2003(수들의 합 2)
//
//  Created by 고상원 on 2020/02/29.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int A[10001] = {0};
    int N, M;
    int cnt = 0;
    int startIdx = 1;
    int sum = 0;
    
    cin >> N >> M;
    for(int i = 1; i <= N; i++)
        cin >> A[i];
    
    for(int i = 1; i <= N; i++){
        startIdx = i;
        sum = 0;
        while(1){
            if(startIdx == N+1) break;
            sum += A[startIdx];
            if(sum == M){
                cnt++;
                break;
            }
            else if(sum > M)
                break;
            startIdx++;
        }
    }
    cout << cnt << '\n';
    return 0;
}
