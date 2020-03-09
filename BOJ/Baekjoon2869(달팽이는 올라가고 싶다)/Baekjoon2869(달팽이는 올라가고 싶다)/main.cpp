//
//  main.cpp
//  Baekjoon2869(달팽이는 올라가고 싶다)
//
//  Created by 고상원 on 2020/03/09.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int A, B, V;
    cin >> A >> B >> V;
    
    int height, day = 1;
    height = V - B;
    day = height / (A - B);
    if(height % (A - B) != 0)
        day++;
    
    cout << day << '\n';
    return 0;
}
