//
//  main.cpp
//  Baekjoon1931(회의실배정)
//
//  Created by 고상원 on 2020/01/08.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Time{
public:
    int start;
    int end;
};

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    
    Time t;
    vector <Time> timeArray;
    int minEnd = 0;//끝나는 시간 중 최소 시간
    
    for(int i = 0; i < N; i++){
        cin >> t.start >> t.end;
        if(t.end < minEnd)
            minEnd = t.end;
        timeArray.push_back(t);
    }
    
    int count = 0;
    int nextStartIndex;
    int gap;
    int minGap = 0;//시간 차이중 최소인 값
    for(int i = 0; i < minEnd; i++){
        for(int j = 0; j < N; j++){
            if(i == timeArray[j].start){
                gap = timeArray[j].end - timeArray[j].start;
                if(gap < minGap)
                    minGap = gap;
            }
        }
    }
    
    
    return 0;
}
