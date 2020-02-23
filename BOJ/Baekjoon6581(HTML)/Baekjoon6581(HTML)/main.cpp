//
//  main.cpp
//  Baekjoon6581(HTML)
//
//  Created by 고상원 on 2020/02/23.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    int sum = 0;
    bool sameline = false;
    
    while(cin >> s){
        if(s == "<br>"){
            cout << '\n';
            sum = 0;
        }
        else if(s == "<hr>"){
            if(!sum){//줄의 첫 부분이라면
                for(int i = 0; i < 80; i++)
                    cout << '-';
                cout << '\n';
            }
            else{
                sum = 0;
                cout << '\n';
                for(int i = 0; i < 80; i++)
                    cout << '-';
                cout << '\n';
            }
        }
        else{
            int len = (int)s.length();
            if(!sum){//줄의 첫 부분이라면
                sum = len;
                cout << s;
                sameline = true;
            }
            else if(sum + len + 1 <= 80){
                if(sameline){
                    cout << " ";
                    sum += 1;
                    cout << s;
                }
                if(sum == 80){
                    cout << '\n';
                    sum = 0;
                    sameline = false;
                }
            }
            else{
                cout << '\n';
                sum = len;
                sameline = true;
                cout << s;
            }
        }
    }
    return 0;
}
