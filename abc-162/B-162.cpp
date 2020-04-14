
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
	int n;
	cin >> n;
	ll sum = 0;
	for (int i=1;i <=n;i++) {
		if ((i % 3 == 0) && (i % 5) == 0) {
			continue;
		}
		if ( i % 3 == 0) continue;
		if ( i % 5 == 0) continue;
		sum += i;
	}
	cout << sum << endl;
	return 0;
}
