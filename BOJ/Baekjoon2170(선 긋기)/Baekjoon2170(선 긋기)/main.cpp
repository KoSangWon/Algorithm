//
//  main.cpp
//  Baekjoon2170(선 긋기)
//
//  Created by 고상원 on 2020/02/14.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX 2000000003

bool arr[MAX] = {0};
int N;
int a, b;
int len = 0;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        for(int j = a; j < b; j++){
            if(arr[j] == false)
                len++;
            arr[j] = true;
        }
    }
    cout << len << '\n';
    return 0;
}
