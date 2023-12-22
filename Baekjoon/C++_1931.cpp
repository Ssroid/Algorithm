#include <bits/stdc++.h>
using namespace std;

int n;
pair<int, int> s[100005];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n; i++) {
        cin >> s[i].second >> s[i].first; 
    }
    sort(s, s+n); //first 기준으로 오름차순 정렬
    int ans =0;
    int t=0;
		// t가 시작시간(second)보다 작다면 ans++로 회의 갯수 증가
    for(int i=0;i<n; i++) {
        if(t > s[i].second) continue;
        ans++;
        t = s[i].first;
    }
    cout << ans;
    return 0;
}
