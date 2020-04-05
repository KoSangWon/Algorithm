//
//  main.cpp
//  Baekjoon5597(과제 안 내신 분)
//
//  Created by 고상원 on 2020/04/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[31] = {0};
    int num;
    for(int i = 1; i <= 28; i++){
        cin >> num;
        arr[num]++;
    }
    for(int i = 1; i <= 30; i++){
        if(arr[i] == 0)
            cout << i << '\n';
    }
    return 0;
}
