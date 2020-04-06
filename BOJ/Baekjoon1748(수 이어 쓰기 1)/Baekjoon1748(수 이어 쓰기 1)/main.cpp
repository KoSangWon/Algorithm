//
//  main.cpp
//  Baekjoon1748(수 이어 쓰기 1)
//
//  Created by 고상원 on 2020/04/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string N;
    long ans = 0;
    cin >> N;
    
    int len = int(N.length());
    if(len == 1)
        ans = stoi(N);
    else{
        for(int i = 1; i < len; i++)
            ans += i * (9 * pow(10, i-1));
        ans += len * (stoi(N) - pow(10, len-1) + 1);
    }
    
    cout << ans << '\n';
    return 0;
}
