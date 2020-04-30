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
	int a,b,c;
	cin >> a >> b >>c;
	if (a == b) {
		cout << c << endl;
	} else if (b == c) {
		cout << a << endl;
	} else {
		cout << b << endl;
	}
	return 0;
}
