//
//  main.cpp
//  Baekjoon1735(분수 합)
//
//  Created by 고상원 on 2020/02/27.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int gcd(int x, int y){
    int z = 1;
    while(y != 0){
        z = x % y;
        x = y;
        y = z;
    }
    return x;
}

int main(int argc, const char * argv[]) {
    int a, b, c, d;//입력
    int e, f;//출력
    
    cin >> a >> b >> c >> d;
    
    e = a * d + c * b;
    f = b * d;
    
    int min = gcd(e, f);
    e /= min;
    f /= min;
    cout << e << ' ' << f << '\n';;
    return 0;
}
