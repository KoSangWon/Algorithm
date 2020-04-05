//
//  main.cpp
//  Baekjoon10039(평균 점수)
//
//  Created by 고상원 on 2020/04/05.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int score;
    int sum = 0;
    for(int i = 0; i < 5; i++){
        cin >> score;
        if(score < 40) score = 40;
        sum += score;
    }
    cout << sum / 5 << '\n';
    return 0;
}
