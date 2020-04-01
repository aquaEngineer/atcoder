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
	string str;
	cin >> str;

	if (str == "SAT") {
		cout << 1 << endl;
	}
	if (str == "FRI") {
		cout << 2 << endl;
	}
	if (str == "THU") {
		cout << 3 << endl;
	}
	if (str == "WED") {
		cout << 4 << endl;
	}
	if (str == "TUE") {
		cout << 5 << endl;
	}
	if (str == "MON") {
		cout << 6 << endl;
	}
	if (str == "SUN") {
		cout << 7 << endl;
	}
	return 0;
}
