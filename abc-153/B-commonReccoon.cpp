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
	ll h,n;
	cin >> h >> n;
	vector <ll> a(n);
	ll sum = 0;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		sum+= a[i];
	}
	if (sum >= h) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
