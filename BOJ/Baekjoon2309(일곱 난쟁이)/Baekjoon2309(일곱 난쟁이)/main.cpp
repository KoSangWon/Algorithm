//
//  main.cpp
//  Baekjoon2309(일곱 난쟁이)
//
//  Created by 고상원 on 2020/03/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int A[10];
    int sum = 0;
    int a = 0, b = 0;
    vector<int> B;
    for(int i = 0; i < 9; i++){
        cin >> A[i];
        sum += A[i];
    }

    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++){
            int result = sum;
            result -= (A[i] + A[j]);
            if(result == 100){
                a = i;
                b = j;
            }
        }
    }
    
    for(int i = 0; i < 9; i++){
        if(i == a || i == b) continue;
        B.push_back(A[i]);
    }
    sort(B.begin(), B.end());
    for(int i = 0; i < 7; i++){
        cout << B[i] <<' ';
    }
    return 0;
}
