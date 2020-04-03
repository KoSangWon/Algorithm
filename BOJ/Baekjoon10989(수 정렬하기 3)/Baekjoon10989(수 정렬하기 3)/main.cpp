//
//  main.cpp
//  Baekjoon10989(수 정렬하기 3)
//
//  Created by 고상원 on 2020/04/04.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int N;
int num;
int arr[10001];

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> num;
        arr[num]++;
    }
    
    for(int i = 1; i <= 10000; i++){
        for(int j = 0; j < arr[i]; j++){
            cout << i << '\n';
        }
    }
    
    return 0;
}
