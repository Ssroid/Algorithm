#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(void) {
	string str;
	int ans = 1;
	cin >> str;
	int str_div = str.length()/2;
	
	for(int i=0;i<str_div;i++) {
		//cout << str[i] << ' ' << str[str.length()-i-1] << '\n';
		if(str[i]!=str[str.length()-i-1]) ans = 0;
	}
	cout << ans;
	
	return 0;
}
