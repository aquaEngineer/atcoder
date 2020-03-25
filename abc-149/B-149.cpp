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
	ll a,b,c;
	cin >> a >> b >> c;
	if (a <=c) {
		c -=a;
		a = 0;
	} else {
		a -= c;
		cout << a << " " << b << endl;
		return 0;
	}

	if (b <=c) {
		b = 0;
		cout << a << " " << b << endl;
		return 0;
	} else {
		b -=c;
		cout << a << " " << b << endl;
		return 0;
	}
}

