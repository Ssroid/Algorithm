#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(void) {
    double H, W, N, M;
    cin >> H >> W >> N >> M;
    long long a = ceil(H/(N+1));
    long long b = ceil(W/(M+1));
    cout << b*a;
    return 0;
}
