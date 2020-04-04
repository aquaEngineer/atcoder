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
	ll n,k;
	cin >> n >> k;
	vector <int> h(n);
	ll count =0;
	for (ll i =0;i<n;i++) {
		cin >> h[i];
		if (h[i] >= k) {
			count++;
		}
	}
	cout << count <<endl;
	return 0;
}
