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
	ll k,n;
	cin >> k >> n;
	vector <ll> a(n);
	for(ll i =0; i< n;i++) {
		cin >> a[i];
	}
	vector <ll> b(n);
	for(ll i =1; i< n;i++) {
		b[i-1] = a[i] - a[i-1];
	}
	
	b[n -1] =a[0] +(k - a[n -1]);


	ll m = 0 ;
	ll maxVal = 0;
	for(ll i =0; i< n;i++) {
		m = max(m,b[i]);
		if (m == b[i]) {
			maxVal = i;
		}
	}
	ll ans =0;
	for(ll i =0; i< n;i++) {
		if (i != maxVal) {
		ans += b[i];
		}
	}

	cout << ans << endl; 
}
