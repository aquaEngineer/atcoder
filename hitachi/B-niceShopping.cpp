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
	ll a,b,m;
	cin >> a >> b >> m;
	vector <ll> ax (a);
	vector <ll> bx (b);
	ll minA = 0;
	ll minB = 0;
	ll minSum;
	for (ll i=0;i<a;i++) {
		cin >> ax[i];
		if (minA == 0) {
			minA = ax[i];
		}
		minA = min(minA,ax[i]);
	}
	for (ll i =0;i <b;i++) {
		cin >> bx[i];
		if (minB == 0) {
			minB = bx[i];
		}
		minB = min(minB, bx[i]);
	}
	minSum = minA + minB;

	ll c,d,e;
	for (ll i =0; i< m;i++) {
		cin >> c >> d >> e;
		ll value;
		value = ax[c-1] + bx[d-1] - e;
		minSum = min (minSum, value);
	}
	cout << minSum << endl;
	return 0;
}
