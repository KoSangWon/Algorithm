//
//  main.cpp
//  Baekjoon11399(ATM)
//
//  Created by 고상원 on 2020/01/05.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    
    vector <int>timeArray;
    int time;
    for(int i = 0; i < N; i++){
        cin >> time;
        timeArray.push_back(time);
    }
    sort(timeArray.begin(), timeArray.end());

    int sum = 0;
    int totalSum = 0;
    
    for(int i = 0; i < N; i++){
        sum += timeArray[i];
        totalSum += sum;
    }
    
    cout << totalSum << '\n';
    
    return 0;
}
