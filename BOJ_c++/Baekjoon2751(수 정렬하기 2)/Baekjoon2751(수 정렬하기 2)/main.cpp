//
//  main.cpp
//  Baekjoon2751(수 정렬하기 2)
//
//  Created by 고상원 on 2020/02/11.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int num;
    vector<int> arr;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> num;
        arr.push_back(num);
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < N; i++)
        cout << arr[i] << '\n';
    
    return 0;
}
