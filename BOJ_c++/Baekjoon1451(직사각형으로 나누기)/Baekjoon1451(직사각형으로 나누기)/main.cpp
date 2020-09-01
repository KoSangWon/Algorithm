//
//  main.cpp
//  Baekjoon1451(직사각형으로 나누기)
//
//  Created by 고상원 on 2020/03/15.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int N, M;
int arr[101][101];
long long maxSum = 0;

long long getSum(int x1, int y1, int x2, int y2){
    long long sum = 0;
    for(int i = y1; i <= y2; i++){
        for(int j = x2; j <= x2; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    cin >> N >> M;
    
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j <= M; j++){
            char ch;
            cin >> ch;
            arr[i][j] = ch - '0';
        }
    }
    
    // case 1
    for(int i = 0; i < M - 2; i++){
        for(int j = i + 1; j < M - 1; j++){
            long long a = getSum(0, 0, i, N-1);
            long long b = getSum(i+1, 0, j, N-1);
            long long c = getSum(j+1, 0, M-1, N-1);
            if(maxSum < a*b*c)
                maxSum = a*b*c;
        }
    }
    
    // case 2
    for(int i = 0; i < M - 2; i++){
        for(int j = i + 1; j < M - 1; j++){
            long long a = getSum(0, 0, i, N-1);
            long long b = getSum(i+1, 0, j, N-1);
            long long c = getSum(j+1, 0, M-1, N-1);
            if(maxSum < a*b*c)
                maxSum = a*b*c;
        }
    }
    
    
    return 0;
}
