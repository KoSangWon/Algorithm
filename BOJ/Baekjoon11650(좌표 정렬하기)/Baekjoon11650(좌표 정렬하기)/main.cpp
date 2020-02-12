//
//  main.cpp
//  Baekjoon11650(좌표 정렬하기)
//
//  Created by 고상원 on 2020/02/12.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b){
    if(b.first > a.first)
        return true;
    else if(b.first == a.first){
        if(b.second > a.second)
            return true;
        else
            return false;
    }
    else
        return false;
}

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    vector <pair<int, int>> v(N);
    
    //v로 선언 후 v.resize(N) 해줘도 됨.
    
    for(int i = 0; i < N; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), compare);
    
    for(int i = 0; i < N; i++)
        cout << v[i].first << ' ' << v[i].second << '\n';
    
    return 0;
}
