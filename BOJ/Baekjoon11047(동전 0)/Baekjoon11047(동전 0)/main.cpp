//
//  main.cpp
//  Baekjoon11047(동전 0)
//
//  Created by 고상원 on 2020/01/05.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, K;
    cin >> N >> K;
    
    vector<int> valueArray;
    int value;
    for(int i = 0; i < N; i++){
        cin >> value;
        valueArray.push_back(value);
    }
    int count = 0;
    for(int i = N-1; i >= 0; i--){
        while(K >= valueArray[i]){
            count++;
            K -= valueArray[i];
        }
    }
    cout << count << '\n';
    return 0;
}
