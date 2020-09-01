//
//  main.cpp
//  Baekjoon11004
//
//  Created by 고상원 on 2020/04/05.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int arr[5000001];

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> N >> K;
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    
    sort(arr, arr + N);
    
    cout << arr[K - 1] << '\n';
    
    return 0;
}
