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
	int a,b,c;
	cin >> a>> b >>c;
	if (a == b && a !=c) {
		cout << "Yes" << endl;
		return 0;
	}
	if (b == c && b != a) {
		cout << "Yes" << endl;
		return 0;
	}
	if (a == c && a != b) {
		cout << "Yes" << endl;
		return 0;
	}
	cout << "No" << endl;
	return 0;
}
