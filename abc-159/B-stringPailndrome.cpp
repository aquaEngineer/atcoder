#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
using namespace std;
using ll = long long;
 
int main() {
	string s;
	cin >> s;
	string a,b,c,d;
	int n = s.size();
	a = s.substr(0,(n-1)/2);
	b = a;
	c = s.substr((n+3)/2-1);
	d = a;
	reverse(a.begin(),a.end());
	if (a != b) {
		cout << "No" << endl;
		return 0;
	}
	if (a != c) {
		cout << "No" << endl;
		return 0;
	}
	
	reverse(c.begin(),c.end());
	if (b != c) {
		cout << "No" << endl;
		return 0;
	}
	cout << "Yes" << endl;

	return 0;
}

