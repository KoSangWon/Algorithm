//
//  main.cpp
//  Baekjoon2822(점수 계산)
//
//  Created by 고상원 on 2020/04/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    vector<pair<int, int>> v(8);
    for(int i = 0; i < 8; i++){
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    int sum = 0;
    vector<int> container;
    for(int i = 3; i <= 7; i++){
        sum += v[i].first;
        container.push_back(v[i].second);
    }
    cout << sum << '\n';
    sort(container.begin(), container.end());
    for(int i = 0; i < container.size(); i++)
        cout << container[i] << ' ';
    cout << '\n';
    return 0;
}
