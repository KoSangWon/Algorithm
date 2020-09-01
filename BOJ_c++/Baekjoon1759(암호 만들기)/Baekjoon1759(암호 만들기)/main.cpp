//
//  main.cpp
//  Baekjoon1759(암호 만들기)
//
//  Created by 고상원 on 2020/03/26.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 15;

int L, C;
char alphabet[MAX];
vector<char> vowel;
vector<char> consonant;
vector<string> result;
map<string, bool> visited;

void password(int idx1, int idx2, int vCnt, int cCnt, string s){
    if(s.length() == L && vCnt >= 1 && cCnt >= 2){
        sort(s.begin(), s.end());
        if(visited.count(s) == false){
            visited[s] = true;
            result.push_back(s);
        }
        return;
    }
    
    if(s.length() == L)
        return;
    
    for(int i = idx1 + 1; i < vowel.size(); i++)
        password(i, idx2, vCnt+1, cCnt, s+vowel[i]);
    for(int i = idx2 + 1; i < consonant.size(); i++)
        password(idx1, i, vCnt, cCnt+1, s+consonant[i]);
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> L >> C;
    
    for(int i = 0; i < C; i++){
        cin >> alphabet[i];
        if(alphabet[i] == 'a' || alphabet[i] == 'e' || alphabet[i] == 'i' || alphabet[i] == 'o' || alphabet[i] == 'u')
            vowel.push_back(alphabet[i]);
        else
            consonant.push_back(alphabet[i]);
    }
    
    sort(vowel.begin(), vowel.end());
    sort(consonant.begin(), consonant.end());
    
    password(-1, -1, 0, 0, "");
    sort(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << '\n';
    
    return 0;
}
