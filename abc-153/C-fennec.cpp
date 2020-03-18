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
	int n,k;
	cin >> n >> k;
	vector <ll> h(n);
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	if (n <= k ) {
		cout << 0 << endl;
		return 0;
	}
	sort(h.begin(),h.end());
	while (k>0) {
		h.pop_back();
		k--;
	}
	ll count = 0;
	for (int i = 0; i < h.size(); i++) {
		count+= h[i];
	}
	cout << count << endl;
	return 0;
}
