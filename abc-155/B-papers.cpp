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
	int n;
	cin >> n;
	vector <int> a(n);
	bool flag = true;
	for (int i =0; i<n; i++) {
		cin >> a[i];
		if (a[i] % 2 != 0) {
			continue;
		} else {
			if (a[i] % 3 != 0 && a[i] % 5 != 0) {
				cout << "DENIED" << endl;
				return 0;
			}
		}
	}

	cout << "APPROVED" << endl;
	return 0;
}
