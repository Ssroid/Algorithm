#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, a, total, min_v;
    cin >> t;
    for(int i=0;i<t;i++) {
        min_v=100;
        total=0;
        for(int j=0;j<7;j++) {
            cin >> a;
            if(a%2==0) {
                total += a;
                min_v = min(min_v, a);
            }
        }
        cout << total << ' ' << min_v << '\n';
    }

    return 0;
}
