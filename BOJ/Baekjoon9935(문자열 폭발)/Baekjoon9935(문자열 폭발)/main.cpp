//
//  main.cpp
//  Baekjoon9935(문자열 폭발)
//
//  Created by 고상원 on 2020/02/26.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string str;
    string bomb;
    char result[1000001];
    
    cin >> str >> bomb;
    int len1 = (int)str.length();
    int len2 = (int)bomb.length();
    int index = 0;
    for(int idx1 = 0; idx1 < len1; idx1++){
        result[index++] = str[idx1];
        int bombSize = len2;
        if(str[idx1] == bomb[--bombSize]){
            bool check = false;
            int size = index - len2;
            for(int j = index - 1; j >= size; j--){
                if(result[j] == bomb[bombSize--]){
                    check = true;
                }else{
                    check = false;
                    break;
                }
            }
            if(check == true)
                index -= bomb.length();
        }
    }

    if(index == 0){
        cout << "FRULA" << '\n';
    }
    else{
        for(int i = 0; i < index; i++)
            cout << result[i];
        cout << '\n';
    }
    
    return 0;
}
