//
//  main.cpp
//  Baekjoon4948(베르트랑 공준)
//
//  Created by 고상원 on 2020/02/20.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 123456;

bool isNotPrime[2*MAX+1];

void check(){
    isNotPrime[1] = true;
    int temp = sqrt(2*MAX);
    for(int i = 2; i <= temp; i++){
        if(!isNotPrime[i]){
            for(int j = i*i; j <= 2*MAX; j+=i)
                isNotPrime[j] = true;
        }
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    check();
    while(1){
        cin >> n;
        if(n == 0) break;
        int primeCnt = 0;
        for(int i = n+1; i <= 2*n; i++){
            if(!isNotPrime[i])
                primeCnt++;
        }
        cout << primeCnt << '\n';
    }
    return 0;
}
