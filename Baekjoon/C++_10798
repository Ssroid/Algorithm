#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	int m;
	int max = -1;
	vector<vector<char>> v(5, vector<char>(15,'?'));
	
	for(int i=0;i<5;i++) {
		vector<char> v2;
		cin >> str;
		m = str.length();
		if(max <=m) max = m;
		for(int j=0;j<m;j++) {
			v[i][j]= str[j];
		}
	}
	for(int i=0;i<max;i++) {
		for(int j=0;j<5;j++) {
			if(v[j][i]!='?') {
				cout << v[j][i];
			}
		}
	}
	return 0;
}
