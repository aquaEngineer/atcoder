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
	for (int i =0; i < s.size(); i++) {
		if ((i+1) % 2 == 1) {
			if (s[i] != 'R' && s[i] != 'U' && s[i] != 'D') {
				cout << "No" << endl;
				return 0;
			}
		} else {
			if (s[i] != 'L' && s[i] != 'U' && s[i] != 'D') {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}
