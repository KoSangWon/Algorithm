//
//  main.cpp
//  Baekjoon2251(물통)
//
//  Created by 고상원 on 2020/03/21.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int A, B, C;
    vector<int> v;
    
    cin >> A >> B >> C;
    
    if(A >= B && B >= C){
        v.push_back(C);
    }
    else if(A >= C && C >= B){
        v.push_back(C);
        v.push_back(C-B);
    }
    else if(B >= A && A >= C){
        v.push_back(C);
    }
    else if(B >= C && C >= A){
        v.push_back(C);
        v.push_back(C-A);
    }
    else if(C >= A && A >= B){
        v.push_back(C);
        v.push_back(C-B);
        v.push_back(C-A+B);
        v.push_back(C-A-B);
    }
    else if(C >= B && B >= A){
        v.push_back(C);
        v.push_back(A);
        v.push_back(B);
        v.push_back(C-B);
        v.push_back(C-A);
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    
    return 0;
}
