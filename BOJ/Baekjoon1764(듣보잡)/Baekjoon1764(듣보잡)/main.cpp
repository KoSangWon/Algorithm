//
//  main.cpp
//  Baekjoon1764(듣보잡)
//
//  Created by 고상원 on 2020/02/23.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> v1; //듣도 못한 사람
vector<string> v2; //보도 못한 사람
vector<string> v3; //듣도 보도 못한 사람

int main(int argc, const char * argv[]) {
    int N, M;
    string str;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> str;
        v1.push_back(str);
    }
    for(int i = 0; i < M; i++){
        cin >> str;
        v2.push_back(str);
    }
    
    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v2.size(); j++){
            if(v1[i] == v2[j])
                v3.push_back(v1[i]);
        }
    }
    
    sort(v3.begin(), v3.end());
    cout << v3.size() << '\n';
    for(int i = 0; i < v3.size(); i++)
        cout << v3[i] << '\n';
    
    return 0;
}
