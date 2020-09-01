//
//  main.cpp
//  Baekjoon10872(팩토리얼)
//
//  Created by 고상원 on 2020/04/05.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int factorial(int x){
    if(x == 0) return 1;
    return x * factorial(x-1);
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    cout << factorial(N) << '\n';
    return 0;
}
