#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <utility>
using namespace std;
using ll = long long;
 
int main() {
	ll n, a,b;
	cin >> n >> a >> b;
	ll sum =0;
	if (a == 0) {
		cout << 0 << endl;
		return 0;
	}
 
	sum = ((n / (a + b)) * a);
	if (n % (a + b) >= a) {
		sum = sum +a;
	} else {
		sum = sum + (n % (a + b));
	}
	cout << sum << endl;
	return 0;
 
}#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <utility>
using namespace std;
using ll = long long;
 
int main() {
	ll n, a,b;
	cin >> n >> a >> b;
	ll sum =0;
	if (a == 0) {
		cout << 0 << endl;
		return 0;
	}
 
	sum = ((n / (a + b)) * a);
	if (n % (a + b) >= a) {
		sum = sum +a;
	} else {
		sum = sum + (n % (a + b));
	}
	cout << sum << endl;
	return 0;
 
}
