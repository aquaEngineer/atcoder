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
	int count = 0;
	vector <int> a(n);
	int mi;
	for (int i = 0; i<n; i++) {
		cin >> a[i];
		if (i == 0) {
			mi = a[i];
		}
		if (mi >= a[i]) {
			count++;
		}
		mi = min(mi,a[i]);
	}
	cout << count << endl;
}

