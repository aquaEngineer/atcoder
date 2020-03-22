
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
	ll n;
	cin >> n ;
	vector <ll> a(n);
	for (ll i=0;i<n;i++) {
		cin >>a[i];
	}
	sort(a.begin(),a.end());
	for (ll i=1;i<n;i++) {
		if (a[i] == a[i-1]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}

