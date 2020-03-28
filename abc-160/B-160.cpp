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
	ll x;
	cin >> x;
	ll ans = 0;
	ll a,b,c;
	a = x / 500;
	b = x % 500;
	c = b /5;
	ans = ans + a * 1000;
	ans = ans + (c * 5);
	cout << ans << endl;
	return 0;
}
