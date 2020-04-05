//
//  main.cpp
//  Baekjoon10797(10부제)
//
//  Created by 고상원 on 2020/04/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int arr[5];
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        if(arr[i] == n)
            cnt++;
    }
    cout << cnt << '\n';

    return 0;
}
