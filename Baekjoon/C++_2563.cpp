#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// paper and painting size
int vec_size = 100;
int pap_size = 10;

vector<vector<int>> v(vec_size, vector<int>(vec_size,0));

int count() {
	int cnt = 0;
	for(int i=0;i<vec_size;i++) {
		for(int j=0;j<vec_size;j++) if(v[i][j] == 1) cnt++;
	}
	return cnt;
}

// show the vector
void show() {
	for(int i=0;i<vec_size;i++) {
		for(int j=0;j<vec_size;j++) {
			cout << v[i][j] << ' ';
		}
		cout << '\n';
	}
}

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int l=0;l<n;l++) {
		int x, y;
		cin >> x >> y;
		for(int i=0;i<pap_size;i++) {
			if(i+x>=vec_size) break;
			for(int j=0;j<pap_size;j++) {
				if(j+y>=vec_size) break;
				v[i+x][j+y] = 1;
			}
		}
	}
	//show();
	cout << count();
	
	return 0;
}
