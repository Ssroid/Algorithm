#include <bits/stdc++.h>
using namespace std;

int n, k;
int arr[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n; i++) {
        cin >> arr[i];
    }
		// 오름차순 정렬
    sort(arr, arr+n);
    int ans = 0;
		// arr의 뒤에서부터 순환
    for(int i=n-1;i>=0;i--) {
				// 기존 ans 와 arr[i] 과 해당 갯수(전체-i번째)만큼 곱하면 최대 중량
        ans = max(ans, arr[i]*(n-i));
    }
    cout << ans;

    return 0;
}
