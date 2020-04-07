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
	ll a,b;
	cin >> a >> b;
	ll sum = (a + b) /2;
	if ((a + b) % 2 !=0) {
		cout << "IMPOSSIBLE" << endl;
	} else {
		cout << sum << endl;
	}
	return 0;
}
