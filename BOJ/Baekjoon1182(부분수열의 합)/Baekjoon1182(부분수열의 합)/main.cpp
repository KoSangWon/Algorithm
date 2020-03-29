//
//  main.cpp
//  Baekjoon1182(부분수열의 합)
//
//  Created by 고상원 on 2020/03/30.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;
int arr[20];
int N, S;
int cnt;

void dfs(int i, int sum){
    if(i == N)
        return;
    if(sum + arr[i] == S)
        cnt++;
    
    dfs(i + 1, sum);
    dfs(i + 1, sum + arr[i]);
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> N >> S;
    
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    
    dfs(0, 0);
    
    cout << cnt << '\n';
    return 0;
}
