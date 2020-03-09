#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <utility>
using namespace std;
using ll = long long;
 
int main() {
	string str;
	cin >> str;
	int count = str.length();
	bool flag = true;
	if (count ==1 || count == 3 || count == 5 || count == 7 || count ==9) {
		cout << "No" << endl;
		return 0;
	}
	if (count == 2) {
		if (str != "hi") {
			cout << "No" << endl;
			return 0;
		}
	}
	if (count ==4) {
		if (str != "hihi") {
			cout << "No" << endl;
			return 0;
		}
	}
	if (count == 6) {
		if (str != "hihihi") {
			cout << "No" << endl;
			return 0;
		}
	}
	if (count == 8) {
		if (str != "hihihihi") {
			cout << "No" << endl;
			return 0;
		}
	}
	if (count == 10) {
		if (str != "hihihihihi") {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
