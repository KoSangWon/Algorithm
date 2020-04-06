//
//  main.cpp
//  Baekjoon5532(방학 숙제)
//
//  Created by 고상원 on 2020/04/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    int checkKor = L - A/C;
    int checkMath = L - B/D;
    if(A%C)
        checkKor--;
    if(B%D)
        checkMath--;
    cout << min(checkKor, checkMath) <<'\n';
    return 0;
}
