//
//  main.cpp
//  Baekjoon2798(블랙잭)
//
//  Created by 고상원 on 2020/04/05.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, M;
    int arr[101];
    int sum = 0;
    int result = 0;
    cin >> N >> M;
    
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    
    for(int i = 0; i < N-2; i++){
        for(int j = i+1; j < N-1; j++){
            for(int k = j+1; k < N; k++){
                sum = arr[i] + arr[j] + arr[k];
                if(sum <= M && M - sum < M - result)
                    result = sum;
            }
        }
    }
    cout << result << '\n';
    
    return 0;
}
