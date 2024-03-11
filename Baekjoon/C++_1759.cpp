#include <bits/stdc++.h>

using namespace std;

int L, C;
vector<char> v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> L >> C;
    char tmp;
    
    for(int i = 0; i < C; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    vector<int> size;
    for(int i = 0; i < L; i++) {
        size.push_back(0);
    }
    for(int i = 0; i < C-L; i++) {
        size.push_back(1);
    }
    
    do {
        int cons = 0, vow = 0;
        string str = "";
        for(int j = 0; j < C; j++) if(!size[j]) {
            str += v[j];
            if(v[j] == 'a' || v[j] == 'e' || v[j] == 'o' || v[j] == 'u') vow++;
            else cons++;
        }
        if(cons >= 2 && vow >= 1) cout << str << '\n';
    } while(next_permutation(size.begin(), size.end()));
    
    return 0;
}
