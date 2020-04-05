//
//  main.cpp
//  Baekjoon10798(세로읽기)
//
//  Created by 고상원 on 2020/04/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string arr[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(i < arr[j].size())
                cout << arr[j][i];
        }
    }
    
    cout << '\n';
    
    return 0;
}
