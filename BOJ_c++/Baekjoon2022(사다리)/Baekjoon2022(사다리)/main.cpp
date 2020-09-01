//
//  main.cpp
//  Baekjoon2022(사다리)
//
//  Created by 고상원 on 2020/02/29.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

double x, y, c;

double func(double mid){
    double h1 = sqrt(x*x - mid*mid);
    double h2 = sqrt(y*y - mid*mid);

    return (h1 * h2)/(h1 + h2);
}

int main(int argc, const char * argv[]) {
    cin >> x >> y >> c;
    
    double low = 0;
    double high = min(x, y);
    double result = 0;
    
    while(high - low > 0.000001){
        double mid = (low + high) / 2.0;
        
        if(func(mid) >= c){
            result = mid;
            low = mid;
        }
        else
            high = mid;
    }
    printf("%.3lf\n", result);
    return 0;
}
