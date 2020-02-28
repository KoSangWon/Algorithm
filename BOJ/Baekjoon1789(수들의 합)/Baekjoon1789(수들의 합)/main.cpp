//
//  main.cpp
//  Baekjoon1789(수들의 합)
//
//  Created by 고상원 on 2020/02/29.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long long S;
    int num = 1;
    int cnt = 0;
    long long sum = 0;
    
    cin >> S;
    while(1){
        sum += num;
        cnt++;
        if(sum > S){
            cnt--;
            break;
        }
        num++;
    }
    cout << cnt << '\n';
    return 0;
}
