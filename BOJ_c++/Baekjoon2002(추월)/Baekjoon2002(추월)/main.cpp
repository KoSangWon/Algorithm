//
//  main.cpp
//  Baekjoon2002(추월)
//
//  Created by 고상원 on 2020/02/23.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<string> v1;//들어오는 차
vector<string> v2;//나가는 차
vector<string> v3;//추월한 차

//추월여부 확인
bool isOvertake(string s, vector<string> &v){
    for(int i = 0; i < v.size(); i++)
        if(s == v[i])
            return true;
    return false;
}

int main(int argc, const char * argv[]) {
    int N;
    string str;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> str;
        v1.push_back(str);
    }
    for(int i = 0; i < N; i++){
        cin >> str;
        v2.push_back(str);
    }
    
    int idx1 = 0, idx2 = 0;
    int ans = 0;
    while(idx1 < v1.size() && idx2 < v2.size()){
        if(v1[idx1] == v2[idx2]){
            idx1++;
            idx2++;
        }
        else{
            if(isOvertake(v1[idx1], v3))
                idx1++;
            else{
                v3.push_back(v2[idx2]);
                idx2++;
                ans++;
            }
        }
    }
    cout << ans << '\n';
    
    return 0;
}
