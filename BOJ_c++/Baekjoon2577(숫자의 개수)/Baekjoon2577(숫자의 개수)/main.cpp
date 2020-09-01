//
//  main.cpp
//  Baekjoon2577(숫자의 개수)
//
//  Created by 고상원 on 2020/04/05.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int A, B, C;
    cin >> A >> B >> C;
    int result = A * B * C;
    int arr[10] = {0};
    int remainder;
    
    while(result > 0){
        remainder = result % 10;
        arr[remainder]++;
        result /= 10;
    }
    for(int i = 0; i <= 9; i++)
        cout << arr[i] << '\n';
    return 0;
}
