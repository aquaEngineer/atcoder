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
	ll n;
	int k;
	cin >> n >> k;
	int keta =1;
	int x = k;
	if (n <= k) {
	cout << 1 << endl;
	return 0;
	}
	while (1) {
		keta++;
		x = x * k;
		if (x > n)  break;
	}
	cout << keta << endl;
	return 0;
}
