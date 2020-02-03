//
//  main.cpp
//  Baekjoon5585(거스름돈)
//
//  Created by 고상원 on 2020/01/07.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int price, remain;
    int coin[6] = {500, 100, 50, 10, 5, 1};
    int count = 0;
    
    cin >> price;
    remain = 1000 - price;
    for(int i = 0; i < 6; i++){
        while(remain / coin[i]){
            count += remain / coin[i];
            remain %= coin[i];
        }
    }
    cout << count << '\n';
    
    return 0;
}
