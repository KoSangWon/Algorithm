//
//  main.cpp
//  Baekjoon2490(윷놀이)
//
//  Created by 고상원 on 2020/04/05.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[4];
    int cnt;
    for(int test = 0; test < 3; test++){
        cnt = 0;
        for(int i = 0; i < 4; i++){
            cin >> arr[i];
            if(arr[i] == 1)
                cnt++;
        }

        switch(cnt){
            case 0:
                cout << 'D' << '\n';
                break;
            case 1:
                cout << 'C' << '\n';
                break;
            case 2:
                cout << 'B' << '\n';
                break;
            case 3:
                cout << 'A' << '\n';
                break;
            case 4:
                cout << 'E' << '\n';
                break;
        }
    }
    
    return 0;
}
