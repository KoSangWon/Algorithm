//
//  main.cpp
//  Baekjoon5565(영수증)
//
//  Created by 고상원 on 2020/04/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int sum;
    int arr[10];
    
    cin >> sum;
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        sum -= arr[i];
    }
    
    cout << sum << '\n';
    
    return 0;
}
