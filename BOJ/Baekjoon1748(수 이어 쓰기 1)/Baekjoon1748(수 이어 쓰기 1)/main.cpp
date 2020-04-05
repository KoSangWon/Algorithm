//
//  main.cpp
//  Baekjoon1748(수 이어 쓰기 1)
//
//  Created by 고상원 on 2020/04/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long long N;
    cin >> N;
    
    int cnt;
    int sum = 0;
    
    for(int i = 1; i <= N; i++){
        cnt = 0;
        while(i > 0){
            i /= 10;
            cnt++;
        }
        sum += cnt;
    }
    cout << sum << '\n';
    return 0;
}
