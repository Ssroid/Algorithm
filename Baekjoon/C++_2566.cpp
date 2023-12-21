#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, max =-1, mx = 0, my = 0;
	//cin >> N;

	for(int i=0;i<9;i++) {
		for(int j=0;j<9;j++) {
			int a;
			cin >> a;
			if ( max <= a) {
				max = a;
				mx = i+1;
				my = j+1;
			}
		}
	}
	cout << max << '\n';
	cout <<  mx << ' '<< my; 

	return 0;
}
