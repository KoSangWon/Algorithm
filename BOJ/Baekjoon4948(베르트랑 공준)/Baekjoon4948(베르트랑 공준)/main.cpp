//
//  main.cpp
//  Baekjoon4948(베르트랑 공준)
//
//  Created by 고상원 on 2020/02/20.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPrimeNumber(int num){
    int cnt = 1;
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0)
            cnt++;
    }
    if(cnt > 1)
        return false;
    return true;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    while(1){
        cin >> n;
        if(n == 0) break;
        int primeCnt = 0;
        for(int i = n+1; i <= 2*n; i++){
            if(isPrimeNumber(i))
                primeCnt++;
        }
        cout << primeCnt << '\n';
    }
    return 0;
}
