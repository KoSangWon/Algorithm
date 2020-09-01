//
//  main.cpp
//  Baekjoon9498(시험 성적)
//
//  Created by 고상원 on 2020/04/05.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int score;

int main(int argc, const char * argv[]) {
    cin >> score;
    if(score >= 90) cout << 'A' << '\n';
    else if(score >= 80) cout << 'B' << '\n';
    else if(score >= 70) cout << 'C' << '\n';
    else if(score >= 60) cout << 'D' << '\n';
    else cout << 'F' << '\n';

    return 0;
}
