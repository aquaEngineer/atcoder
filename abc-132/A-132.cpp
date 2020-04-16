
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
	for (int i =0;i<s.size();i++) {
		int count =0;
		for (int j =0;j<s.size();j++) {
			if (s[i] == s[j]) count++;
		}
		if (count !=2) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
