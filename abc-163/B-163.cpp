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
	ll n,m;
	cin >> n >> m;
	vector <ll> a(m);
	for (ll i=0; i< m; i++) {
		cin >> a[i];
		n -= a[i];
	}
	if (n < 0) {
		cout << -1 << endl;
	} else {
		cout << n << endl;
	}
	return 0;
}
