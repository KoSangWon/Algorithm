//
//  main.cpp
//  Baekjoon10825(국영수)
//
//  Created by 고상원 on 2020/04/03.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

pair<pair<string, int>, pair<int, int>> student[100001];

bool cmp(pair<pair<string, int>, pair<int, int>> a, pair<pair<string, int>, pair<int, int>> b){
    if(a.first.second > b.first.second)
        return true;
    else if(a.first.second == b.first.second){
        if(a.second.first < b.second.first)
            return true;
        else if(a.second.first == b.second.first){
            if(a.second.second > b.second.second)
                return true;
            else if(a.second.second == b.second.second)
                if(a.first.first < b.first.first)
                    return true;
        }
    }
    return false;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++)
        cin >> student[i].first.first >> student[i].first.second >> student[i].second.first >> student[i].second.second;
    
    sort(student, student + N, cmp);
    for(int i = 0; i < N; i++)
        cout << student[i].first.first << '\n';
    
    return 0;
}
