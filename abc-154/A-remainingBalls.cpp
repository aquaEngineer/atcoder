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
	string s,t,u;
	ll a,b;
	cin >> s >> t;
	cin >> a >> b;
	cin >> u;
	if (u == s) {
		a--;
	} else {
		b--;
	}
	cout << a << " "<< b << endl;
	return 0;
}
