//
//  main.cpp
//  Baekjoon1065(한수)
//
//  Created by 고상원 on 2020/02/23.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    bool arr[1001] = {0};
    int N;
    int cnt = 0;
    
    for(int i = 1; i <= 99; i++){
        arr[i] = true;
    }
    
    cin >> N;
    
    if(N >= 100){
        for(int i = 100; i <= N; i++){
            int a, b, c;
            a = i % 10;//1의 자리
            b = (i/10)%10;//10의 자리
            c = i/100;//100의 자리
            if((c-b)==(b-a))
                arr[i] = true;
        }
    }
    
    for(int i = 1; i <= N; i++){
        if(arr[i] == true)
            cnt++;
    }
    
    cout << cnt << '\n';
    
    return 0;
}
