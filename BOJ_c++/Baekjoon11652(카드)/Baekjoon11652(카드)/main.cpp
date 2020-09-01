//
//  main.cpp
//  Baekjoon11652(카드)
//
//  Created by 고상원 on 2020/04/04.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N;
    int max = 1;
    long long ans;
    long long arr[100001];
    int cnt = 1;
    
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr + N);
    ans = arr[0];
    for(int i = 1; i < N; i++){
        if(arr[i] == arr[i-1])
            cnt++;
        else
            cnt = 1;
        
        if(max < cnt){
            max = cnt;
            ans = arr[i];
        }
    }
    
    cout << ans << '\n';
    
    return 0;
}
