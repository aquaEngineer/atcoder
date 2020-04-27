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
	cin >> n;
	if (n % 2 ==0) {
		cout << n << endl;
	} else {
		cout << n *2 << endl;
	}
	return 0;
}
